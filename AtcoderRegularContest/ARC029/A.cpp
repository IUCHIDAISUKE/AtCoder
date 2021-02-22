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
    int n;
    cin >> n;
    vector<int> t(n);
    rep(i, n) cin >> t[i];

    int ans = 1001001001;
    for (int bit = 0; bit < (1 << n); bit++)
    {
        int a = 0, b = 0;
        rep(i, n)
        {
            if (bit & (1 << i))
                a += t[i];
            else
                b += t[i];
        }
        ans = min(ans, max(a, b));
    }

    cout << ans << "\n";
    return 0;
}