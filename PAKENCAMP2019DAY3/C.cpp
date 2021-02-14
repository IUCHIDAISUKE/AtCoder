#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    rep(i, n) rep(j, m) cin >> a[i][j];

    ll ans = 0;
    rep(i, m)
    {
        rep(j, i)
        {
            ll tmp = 0;
            rep(k, n)
                tmp += max(a[k][i], a[k][j]);
            ans = max(ans, tmp);
        }
    }
    cout << ans << "\n";
    return 0;
}
