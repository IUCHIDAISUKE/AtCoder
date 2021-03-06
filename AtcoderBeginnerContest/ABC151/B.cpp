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
    int n, k, m;
    cin >> n >> k >> m;
    vector<int> a(n - 1);
    rep(i, n - 1) cin >> a[i];

    int s = 0;
    rep(i, n - 1) s += a[i];
    int g = n * m - s;

    cout << ((g <= k) ? max(0, g) : -1) << '\n';
    return 0;
}
