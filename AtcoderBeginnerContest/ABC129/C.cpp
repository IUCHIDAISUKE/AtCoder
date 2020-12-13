#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int MOD = (int)1e9 + 7;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    rep(i, m) cin >> a[i];

    int ans = 0;
    vector<ll> dp(n + 10, 0);
    vector<bool> oks(n + 10, true);
    rep(i, m) oks[a[i]] = false;
    dp[0] = 1;
    rep(i, n)
    {
        if (oks[i + 1])
        {
            dp[i + 1] += dp[i];
            dp[i + 1] %= MOD;
        }
        if (oks[i + 2])
        {
            dp[i + 2] += dp[i];
            dp[i + 2] %= MOD;
        }
    }

    cout << dp[n] << '\n';
}
