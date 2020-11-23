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
    int n;
    cin >> n;
    vector<ll> a(n), cuml(n + 1), cumr(n + 1);
    rep(i, n) cin >> a[i];

    ll ans = INF;
    rep(i, n) cumr[i + 1] = cumr[i] + a[i];
    rep(i, n) cuml[n] = cuml[i] + a[i];

    rep2(i, 1, n)
    {
        ll tmp = cum[n] - cum[i];
        ans = min(ans, abs(tmp - cum[i]));
    }
    cout << ans << '\n';
    return 0;
}

// int main()
// {
//     int n;
//     cin >> n;
//     vector<ll> a(n), cum(n + 1);
//     rep(i, n) cin >> a[i];

//     ll ans = INF;
//     rep(i, n) cum[i + 1] = cum[i] + a[i];
//     rep2(i, 1, n)
//     {
//         ll tmp = cum[n] - cum[i];
//         ans = min(ans, abs(tmp - cum[i]));
//     }
//     cout << ans << '\n';
//     return 0;
// }
