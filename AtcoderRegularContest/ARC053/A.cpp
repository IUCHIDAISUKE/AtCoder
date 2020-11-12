#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int MOD = 998244353;

int solve(int h, int w)
{
    int res = 0;
    res += (h - 1) * w;
    res += h * (w - 1);
    return res;
}

int main()
{
    int h, w;
    cin >> h >> w;
    int ans = solve(h, w);

    cout << ans << '\n';
    return 0;
}
