#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int MOD = (int)1e9 + 7;

const int N_MAX = (int)1e5 + 10000;
ll dp[N_MAX][3];

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> abc(n, vector<int>(3));
    rep(i, n) cin >> abc[i][0] >> abc[i][1] >> abc[i][2];

    rep(i, n)
    {

        rep(j, 3)
        {
            rep(k, 3)
            {
                if (j == k)
                    continue;
                dp[i + 1][k] = max(dp[i + 1][k], dp[i][j] + abc[i][k]);
            }
        }
    }
    cout << max({dp[n][0], dp[n][1], dp[n][2]}) << '\n';
}

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n), b(n), c(n);
//     rep(i, n) cin >> a[i] >> b[i] >> c[i];

//     vector<vector<int>> dp(n + 1, vector<int>(3, 0));

//     rep(i, n)
//     {
//         dp[i + 1][0] = max(dp[i + 1][0], dp[i][1] + b[i]);
//         dp[i + 1][0] = max(dp[i + 1][0], dp[i][2] + c[i]);
//         dp[i + 1][1] = max(dp[i + 1][1], dp[i][0] + a[i]);
//         dp[i + 1][1] = max(dp[i + 1][1], dp[i][2] + c[i]);
//         dp[i + 1][2] = max(dp[i + 1][2], dp[i][0] + a[i]);
//         dp[i + 1][2] = max(dp[i + 1][2], dp[i][1] + b[i]);
//     }
//     cout << max({dp[n][0], dp[n][1], dp[n][2]}) << '\n';
// }
