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
    vector<int> a(n - 1);
    rep(i, n - 1) cin >> a[i];

    int ans = a[0];
    rep(i, n - 1)
        ans += min(a[i], a[i + 1]);
    ans += a.back();
    cout << ans << '\n';
    return 0;
}
