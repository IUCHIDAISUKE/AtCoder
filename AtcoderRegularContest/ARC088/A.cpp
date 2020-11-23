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
    ll x, y;
    cin >> x >> y;

    int ans = 0;
    ll tmp = x;
    while (tmp <= y)
    {
        ans++;
        tmp *= 2;
    }
    cout << ans << '\n';
    return 0;
}
