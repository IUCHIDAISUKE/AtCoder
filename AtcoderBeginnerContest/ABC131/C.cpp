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

ll gcd(ll a, ll b)
{
    return ((b == 0) ? a : gcd(b, a % b));
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b) * b);
}

int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll e = lcm(c, d);
    ll nc = b / c - (a - 1) / c, nd = b / d - (a - 1) / d, ne = b / e - (a - 1) / e;
    cout << (b - a + 1) - nc - nd + ne << "\n";
    return 0;
}