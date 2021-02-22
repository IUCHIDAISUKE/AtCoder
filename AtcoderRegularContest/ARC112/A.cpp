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
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        if (l == r && l == 0)
            cout << 1 << "\n";
        else if (2 * l > r)
            cout << 0 << "\n";
        else
        {
            ll n = r - 2 * l + 1;
            cout << n * (n + 1) / 2 << "\n";
        }
    }
    return 0;
}