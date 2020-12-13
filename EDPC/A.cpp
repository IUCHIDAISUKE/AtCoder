#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int N_MAX = (int)1e5 + 10;

// 配るDP
int main()
{
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i, n) cin >> h[i];

    ll dp[n + 10];
    rep(i, n + 10) dp[i] = INF;
    dp[0] = 0;

    rep(i, n)
    {
        dp[i + 1] = min(dp[i + 1], dp[i] + abs(h[i + 1] - h[i]));
        dp[i + 2] = min(dp[i + 2], dp[i] + abs(h[i + 2] - h[i]));
    }

    cout << dp[n - 1] << '\n';
}

// //もらうDP
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> h(n);
//     rep(i, n) cin >> h[i];

//     ll dp[n + 10];
//     rep(i, n + 10) dp[i] = INF;
//     dp[0] = 0;

//     rep2(i, 1, n + 1)
//     {
//         dp[i] = min(dp[i], abs(h[i] - h[i - 1]) + dp[i - 1]);
//         if (i > 1)
//             dp[i] = min(dp[i], (ll)abs(h[i] - h[i - 2]) + dp[i - 2]);
//     }

//     cout << dp[n - 1] << '\n';
// }
