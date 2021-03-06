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
    vector<int> b(n);
    rep(i, n - 1) cin >> b[i];

    int ans = b[0] + b[n - 2];
    rep(i, n - 2) ans += min(b[i], b[i + 1]);
    cout << ans << '\n';
    return 0;
}
