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
const ll LIMIT = (ll)2e12;
int main()
{
    ll a, k;
    cin >> a >> k;

    ll ans = 0;
    if (k == 0)
        ans = LIMIT - a;
    else
    {
        while (a < LIMIT)
        {
            ans++;
            a += 1 + k * a;
        }
    }
    cout << ans << '\n';
    return 0;
}
