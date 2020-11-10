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
    vector<ll> a(n), cum(n + 1, 0);
    rep(i, n) cin >> a[i];
    rep(i, n) cum[i + 1] = a[i] + cum[i];

    ll ans = 0;
    ll s = 0, max_ = 0;
    rep(i, n)
    {
        max_ = max(max_, cum[i + 1]);
        ans = max(ans, s + max_);
        s += cum[i + 1];
    }
    cout << ans << '\n';
    return 0;
}
