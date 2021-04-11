#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

using namespace std;
using ll = long long int;
using P = pair<int, int>;

const ll INF_L = 1LL << 60;
const int INF_I = 1 << 30;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

int main()
{
    int n, m;
    cin >> n >> m;
    vector<ll> x(m);
    rep(i, m) cin >> x[i];

    sort(all(x));
    vector<int> sub(m - 1);
    rep(i, m - 1) sub[i] = x[i + 1] - x[i];

    sort(all(sub));
    int ans = 0;
    rep(i, m - n) ans += sub[i];

    cout << ans << "\n";
    return 0;
}
