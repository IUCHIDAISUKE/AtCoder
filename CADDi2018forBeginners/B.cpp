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
    int n, h, w;
    cin >> n >> h >> w;
    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];

    int ans = 0;
    rep(i, n)
        ans += (a[i] >= h && b[i] >= w);
    cout << ans << '\n';
    return 0;
}
