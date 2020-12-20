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
    int a, b, t;
    cin >> a >> b >> t;

    int n = b - a;
    int cnt = (t - b + n - 1) / n;

    cout << b + cnt * n << '\n';
    return 0;
}

// int main()
// {
//     int a, b, t;
//     cin >> a >> b >> t;

//     int n = b - a;
//     int ans = b;
//     while (ans < t)
//         ans += n;

//     cout << ans << '\n';
//     return 0;
// }
