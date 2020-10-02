#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int x;
    cin >> x;

    ll ans = 0;
    ans += x / 500 * 1000;
    x -= (x / 500) * 500;
    ans += x / 5 * 5;

    cout << ans << '\n';
    return 0;
}
