#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

using namespace std;
using ll = int64_t;
using P = pair<int, int>;

const ll INF_L = 1LL << 60;
const int INF_I = 1 << 30;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

int main()
{
    ll n;
    cin >> n;

    ll ans = 0;
    ll tmp = 10;
    if (n & 1)
    {
        cout << 0 << "\n";
        return (0);
    }
    while (tmp < n + 1)
    {
        ans += n / tmp;
        tmp *= 5;
    }

    cout << ans << "\n";
    return 0;
}