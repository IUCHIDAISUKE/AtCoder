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
    string s;
    cin >> s;

    int n = s.size();
    ll ans = 0;
    for (int bit = 0; bit < (1 << (n - 1)); bit++)
    {
        ll tmp = s[0] - '0';
        for (int i = 0; i < n - 1; i++)
        {
            if (bit & (1 << i))
            {
                ans += tmp;
                tmp = s[i + 1] - '0';
            }
            else
            {
                tmp *= 10;
                tmp += s[i + 1] - '0';
            }
        }
        ans += tmp;
    }

    cout << ans << "\n";
    return 0;
}