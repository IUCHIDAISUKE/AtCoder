#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int a, b, m;
    cin >> a >> b >> m;
    vector<int> aa(a), bb(b), x(m), y(m), cc(m);
    rep(i, a) cin >> aa[i];
    rep(i, b) cin >> bb[i];
    rep(i, m) cin >> x[i] >> y[i] >> cc[i];

    int ans = 1001001001;
    rep(i, m)
        ans = min(ans, aa[x[i] - 1] + bb[y[i] - 1] - cc[i]);
    sort(all(aa));
    sort(all(bb));
    ans = min(ans, aa[0] + bb[0]);
    cout << ans << '\n';

    return 0;
}
