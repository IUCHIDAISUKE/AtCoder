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
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> l(m), r(m), s(q), g(q);
    rep(i, m) cin >> l[i] >> r[i];
    rep(i, q) cin >> s[i] >> g[i];

    vector<vector<int>> cum(n + 1, vector<int>(n + 1, 0));
    rep(i, m) cum[l[i]][r[i]]++;
    rep(i, n)
    {
        rep(j, n)
        {
            cum[i + 1][j + 1] += cum[i][j + 1] + cum[i + 1][j] - cum[i][j];
        }
    }
    rep(i, q)
    {
        int ans = cum[g[i]][g[i]] - cum[g[i]][s[i] - 1] - cum[s[i] - 1][g[i]] + cum[s[i] - 1][s[i] - 1];
        cout << ans << '\n';
    }
    return 0;
}
