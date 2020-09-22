#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n, s, t, w;
    cin >> n >> s >> t >> w;
    vector<int> a(n - 1);
    rep(i, n - 1) cin >> a[i];
    int ans = (s <= w && w <= t);
    rep(i, n - 1)
    {
        w += a[i];
        ans += (s <= w && w <= t);
    }

    cout << ans << '\n';

    return 0;
}
