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
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];

    int ans = 0;
    rep(i, n)
    {
        rep(j, i)
        {
            double a = (y[j] - y[i]) / (1.0 * x[j] - x[i]);
            ans += (-1.0 <= a && a <= 1.0);
        }
    }
    cout << ans << '\n';
    return 0;
}
