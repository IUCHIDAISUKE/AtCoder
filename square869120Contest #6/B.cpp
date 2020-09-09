#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    ll n;
    cin >> n;

    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];

    ll ans = 1001001001001001001;
    rep(i, n)
    {
        rep(j, n)
        {
            ll s = a[i], g = b[j];
            ll dis = 0;
            rep(k, n)
            {
                dis += abs(a[k] - s) + (b[k] - a[k]) + abs(b[k] - g);
            }
            ans = min(ans, dis);
        }
    }
    cout << ans << endl;
    return 0;
}
