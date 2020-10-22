#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int dp[1000][1000];

bool func(int i, int w, const vector<int> &a)
{
    if (i == 0)
        return dp[i][w] = (w == 0 ? 1 : 0);
    if (dp[i][w])
        if (func(i - 1, w, a))
            return dp[i - 1][w] = true;
    if (func(i - 1, w - a[i], a))
        return dp[i - 1][w - a[i]] = true;
    return dp[i][w] = false;
}

int main()
{
    int n;
    cin >> n;
    rep(i, 1000) rep(j, 1000) dp[i][j] = -1001001001;

    return 0;
}
