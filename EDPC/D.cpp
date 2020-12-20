#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int MOD = (int)1e9 + 7;

int n, weight;

int main()
{
    int n, w;
    cin >> n >> w;
    vector<ll> weight(n), value(n);
    rep(i, n) cin >> weight[i] >> value[i];

    vector<vector<ll>> dp(n + 1, vector<ll>(w + 1, 0));

    rep(i, n)
    {
        rep(j, w + 1)
        {
            if (j - weight[i] >= 0)
                dp[i + 1][j] = max(dp[i + 1][j], dp[i][j - weight[i]] + value[i]);
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
        }
    }
    cout << dp[n][w] << '\n';
    return 0;
}
