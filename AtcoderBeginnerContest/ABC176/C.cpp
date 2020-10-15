#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    ll ans = 0;
    ll ma = a[0];
    rep(i, n)
    {
        ma = max(ma, a[i]);
        ans += (ma - a[i]);
    }
    cout << ans << '\n';
    return 0;
}
