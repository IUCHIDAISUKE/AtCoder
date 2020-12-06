#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int N_MAX = (int)1e5 + 10;

int main()
{
    ll h, w, k, v;
    cin >> h >> w >> k >> v;
    vector<vector<int>> a(h, vector<int>(w));
    rep(i, h) rep(j, w) cin >> a[i][j];

    vector<vector<ll>> cum(h + 1, vector<ll>(w + 1, 0));
    rep(i, h) rep(j, w) cum[i + 1][j + 1] = cum[i + 1][j] + cum[i][j + 1] - cum[i][j] + a[i][j];
    ll ans = 0;
    for (int x1 = 0; x1 < h + 1; x1++)
    {
        for (int x2 = x1 + 1; x2 < h + 1; x2++)
        {
            for (int y1 = 0; y1 < w + 1; y1++)
            {
                for (int y2 = y1 + 1; y2 < w + 1; y2++)
                {
                    ll area = (x2 - x1) * (y2 - y1);
                    ll sum = cum[x2][y2] - cum[x2][y1] - cum[x1][y2] + cum[x1][y1] + area * k;
                    if (sum <= v)
                        ans = max(ans, area);
                }
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
