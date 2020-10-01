#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    ll n, d;
    cin >> n >> d;
    vector<ll> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];

    int ans = 0;
    rep(i, n)
    {
        ll dis;
        dis = x[i] * x[i] + y[i] * y[i];
        if (dis <= d * d)
            ans++;
    }
    cout << ans << '\n';
    return 0;
}
