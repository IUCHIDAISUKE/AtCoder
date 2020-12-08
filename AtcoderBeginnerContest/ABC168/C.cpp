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
    int a, b, h, m;
    cin >> a >> b >> h >> m;

    double n;
    double pi = 3.141592653589793238;

    n = abs(m * 6 - (h * 30 + m * 0.5));
    n = min(360 - n, n);

    double ans = sqrt(a * a + b * b - 2 * a * b * cos(n / 180 * pi));
    printf("%.10f\n", ans);
}
