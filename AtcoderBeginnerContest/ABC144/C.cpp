#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n;
    cin >> n;

    ll ans = 1001001001001001001;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ll tmp = 0;
            tmp += i - 1;
            tmp += (n / i) - 1;
            ans = min(ans, tmp);
        }
    }

    cout << ans << '\n';
    return 0;
}
