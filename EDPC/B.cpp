#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int MOD = (int)1e9 + 7;

// 配るDP
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    rep(i, n) cin >> h[i];
    vector<ll> dp(n + k + 10, INF);
    dp[0] = 0;
    rep(i, n)
    {
        rep(j, k + 1)
        {
            dp[i + j] = min(dp[i + j], abs(h[i + j] - h[i]) + dp[i]);
        }
    }
    cout << dp[n - 1] << '\n';
}

// もらうDP
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> h(n);
//     rep(i, n) cin >> h[i];
//     vector<ll> dp(n + k + 10, INF);
//     dp[0] = 0;
//     rep(i, n)
//     {
//         rep(j, k + 1)
//         {
//             if (i - j >= 0)
//                 dp[i] = min(dp[i], abs(h[i] - h[i - j]) + dp[i - j]);
//         }
//     }
//     cout << dp[n - 1] << '\n';
// }
