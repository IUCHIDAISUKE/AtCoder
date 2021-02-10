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

int gcd(int a, int b)
{
    return (!b ? a : gcd(b, a % b));
}

int main()
{
    int n, xx;
    cin >> n >> xx;
    vector<int> x(n);
    rep(i, n) cin >> x[i];
    x.push_back(xx);

    sort(all(x));
    vector<int> v;
    rep(i, n) v.push_back(x[i + 1] - x[i]);
    int ans = v[0];
    rep(i, n) ans = gcd(ans, v[i]);

    cout << ans << "\n";
    return 0;
}