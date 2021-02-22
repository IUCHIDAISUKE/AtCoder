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
    int d, g;
    cin >> d >> g;
    vector<int> p(d), c(d);
    rep(i, d) cin >> p[i] >> c[i];

    int ans = 1001001001;
    for (int bit = 0; bit < (1 << d); bit++)
    {
        int s = 0, num = 0, rest_ma = -1;
        rep(i, d)
        {
            if (bit & (1 << i))
            {
                s += 100 * (i + 1) * p[i] + c[i];
                num += p[i];
            }
            else
                rest_ma = i;
        }
        if (s < g)
        {
            int s1 = 100 * (rest_ma + 1);
            int need = (g - s + s1 - 1) / s1;
            if (need >= p[rest_ma])
                continue;
            num += need;
        }
        ans = min(ans, num);
    }

    cout << ans << "\n";
    return 0;
}