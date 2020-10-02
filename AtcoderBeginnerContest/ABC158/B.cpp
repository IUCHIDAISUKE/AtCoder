#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    ll n, a, b;
    cin >> n >> a >> b;

    ll ans = n / (a + b) * a;
    ans += min(n % (a + b), a);

    cout << ans << '\n';
    return 0;
}
