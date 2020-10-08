#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int k, n;
    cin >> k >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    rep(i, n - 1) a.push_back(a[i] + k);

    int ans = 1001001001;
    rep(i, n) ans = min(ans, abs(a[i + n - 1] - a[i]));
    cout << ans << '\n';
    return 0;
}
