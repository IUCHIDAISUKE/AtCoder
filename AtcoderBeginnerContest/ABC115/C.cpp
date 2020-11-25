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
    vector<int> h(n);
    rep(i, n) cin >> h[i];

    sort(all(h));
    int ans = 1001001001;
    rep(i, n - (k - 1))
        ans = min(ans, h[k - 1 + i] - h[i]);
    cout << ans << '\n';
    return 0;
}
