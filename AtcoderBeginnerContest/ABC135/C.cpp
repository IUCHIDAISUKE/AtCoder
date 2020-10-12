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
    vector<int> a(n + 1), b(n);
    rep(i, n + 1) cin >> a[i];
    rep(i, n) cin >> b[i];

    ll ans = 0;
    int tmp;
    rep(i, n)
    {
        ans += min(a[i], b[i]);
        tmp = max(0, b[i] - a[i]);
        ans += min(tmp, a[i + 1]);
        a[i + 1] = max(0, a[i + 1] - tmp);
    }
    cout << ans << '\n';
    return 0;
}
