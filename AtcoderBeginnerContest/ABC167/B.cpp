#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    ll a, b, c, k;
    cin >> a >> b >> c >> k;

    ll ans = 0;
    if (a + b >= k)
    {
        ans = min(a, k);
    }
    else
    {
        ans = 2 * a - k + b;
    }
    cout << ans << '\n';
    return 0;
}
