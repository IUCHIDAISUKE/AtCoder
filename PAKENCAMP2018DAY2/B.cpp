#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    sort(all(a));
    reverse(all(a));
    int ans = 0;
    for (int i = d-1; i < n; i+=d)
        ans += a[i];

    cout << ans << '\n';
    return 0;
}
