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
    ll w, h, x, y;
    cin >> w >> h >> x >> y;

    double s;
    int d;

    s = 1.0 * w / 2 * h;
    d = (x * 2 == w && y * 2 == h);
    printf("%.10f %d\n", s, d);
    return 0;
}