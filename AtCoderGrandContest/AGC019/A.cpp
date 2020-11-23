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
    int q, h, s, d, n;
    cin >> q >> h >> s >> d >> n;

    ll ans;
    ll one = min({q * 4, h * 2, s}), two = min({q * 8, h * 4, s * 2, d});

    ans = n / 2 * two + (n % 2) * one;
    cout << ans << '\n';
    return 0;
}
