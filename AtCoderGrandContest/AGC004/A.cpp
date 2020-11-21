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
    ll a, b, c;
    cin >> a >> b >> c;

    ll ans = INF;
    ans = min(ans, a * b * abs(c / 2 - (c - c / 2)));
    ans = min(ans, c * b * abs(a / 2 - (a - a / 2)));
    ans = min(ans, c * a * abs(b / 2 - (b - b / 2)));

    cout << ans << '\n';
    return 0;
}
