#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;

int main()
{
    int n, q;
    cin >> n;
    vector<vector<int>> d(n, vector<int>(n));
    rep(i, n) rep(j, n) cin >> d[i][j];
    cin >> q;
    vector<int> p(q);
    rep(i, q) cin >> p[i];

    vector<vector<int>> cum(n + 1, vector<int>(n + 1));
    rep(i, n) rep(j, n)
        cum[i + 1][j + 1] = cum[i + 1][j] + cum[i][j + 1] - cum[i][j] + d[i][j];

    vector<int> val(n * n + 1, 0);

    for (int x1 = 0; x1 < n; x1++)
    {
        for (int x2 = x1 + 1; x2 < n + 1; x2++)
        {
            for (int y1 = 0; y1 < n; y1++)
            {
                for (int y2 = y1 + 1; y2 < n + 1; y2++)
                {
                    int area = (x2 - x1) * (y2 - y1);
                    int sum = cum[x2][y2] - cum[x1][y2] - cum[x2][y1] + cum[x1][y1];
                    val[area] = max(val[area], sum);
                }
            }
        }
    }

    rep(i, n * n) val[i + 1] = max(val[i + 1], val[i]);

    rep(i, q)
            cout
        << val[p[i]] << '\n';

    return 0;
}
