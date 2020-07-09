#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
#define all2(a, b) (a).begin(), (a).begin() + (b)
#define debug(vari) cerr << #vari << " = " << (vari) << endl;

int main()
{
    int n;
    cin >> n;
    vector<double> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];

    double ans = 0;
    rep(i, n)
    {
        rep2(j, i + 1, n)
        {
            ans = max(ans, sqrt(pow(x[j] - x[i], 2.0) + pow(y[j] - y[i], 2.0)));
        }
    }
    cout << ans << endl;

    return 0;
}
