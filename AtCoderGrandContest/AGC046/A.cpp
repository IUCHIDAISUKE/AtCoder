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
    int x;
    cin >> x;

    int ans;
    int n = 1;
    while (1)
    {
        if ((360 * n) % x == 0)
        {
            ans = (360 * n) / x;
            break;
        }
        n++;
    }

    cout << ans << '\n';
    return 0;
}
