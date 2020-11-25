#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const ll MAX = (ll)1e12;

int main()
{
    ll s, p;
    cin >> s >> p;

    string ans = "No";
    rep2(n, 1, (ll)1e6 + 10)
    {
        if (n == s - p / n)
            ans = "Yes";
    }
    cout << ans << '\n';
    return 0;
}

// int main()
// {
//     ll s, p;
//     cin >> s >> p;
//     for (ll n = 1; n * n <= MAX; n++)
//     {
//         if (p % n)
//             continue;
//         ll m = p / n;
//         if (n + m == s)
//         {
//             cout << "Yes" << '\n';
//             return 0;
//         }
//     }
//     cout << "No" << '\n';
//     return 0;
// }
