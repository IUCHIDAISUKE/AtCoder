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
    vector<int> a(n), b(n), c(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n) cin >> c[i];

    ll ans = 0;
    sort(all(a)), sort(all(c));
    rep(i, n)
    {
        int key = b[i];
        int acnt = lower_bound(all(a), key) - a.begin();
        int ccnt = upper_bound(all(c), key) - c.begin();
        ans += (ll)acnt * (n - ccnt);
    }

    cout << ans << '\n';
    return 0;
}
