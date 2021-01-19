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
    vector<int> d(7), j(7);
    rep(i, 7) cin >> d[i];
    rep(i, 7) cin >> j[i];

    int ans = 0;
    rep(i, 7) ans += max(d[i], j[i]);
    cout << ans << '\n';
    return 0;
}