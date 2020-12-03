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
    int n, k;
    cin >> n >> k;
    vector<int> v(n), cum(n + 1, 0);
    rep(i, n) cin >> v[i];
    rep(i, n) cum[i + 1] = cum[i] + v[i];

    int ans = 0;
    rep(i, n - k)
        ans = max(ans, cum[i + k] - cum[i]);

    cout << ans << '\n';
    return 0;
}
