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

int main()
{
    ll n, m;
    cin >> n >> m;

    ll ans;
    if (n == 1 && m == 1)
        ans = 1;
    else if (n == 1 || m == 1)
        ans = max(n, m) - 2;
    else
        ans = (n - 2) * (m - 2);
    cout << ans << "\n";
    return 0;
}