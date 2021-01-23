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

int cnt(int y, int m, int d)
{
    int res = 0;
    res += 365 * y + y / 4 - y / 100 + y / 400 + (306 * (m + 1)) / 10 + d - 429;
    return res;
}

int main()
{
    int y, m, d;
    cin >> y >> m >> d;

    int ans;
    if (m < 3)
        ans = cnt(y - 1, 12 + m, d);
    else
        ans = cnt(y, m, d);

    cout << cnt(2014, 5, 17) - ans << '\n';
    return 0;
}
