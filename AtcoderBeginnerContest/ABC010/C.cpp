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
    int sx, sy, ex, ey, t, v, n;
    cin >> sx >> sy >> ex >> ey >> t >> v >> n;
    vector<int> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];

    rep(i, n)
    {
        double tmp = 0;
        tmp += sqrt(1.0 * ((sx - x[i]) * (sx - x[i]) + (sy - y[i]) * (sy - y[i])));
        tmp += sqrt(1.0 * ((ex - x[i]) * (ex - x[i]) + (ey - y[i]) * (ey - y[i])));
        if (tmp <= 1.0 * t * v)
        {
            cout << "YES"
                 << "\n";
            return 0;
        }
    }
    cout << "NO"
         << "\n";
    return 0;
}