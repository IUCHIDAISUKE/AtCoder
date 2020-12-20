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
    int l;
    cin >> l;

    ll ans = 1;
    for (int i = 1; i < 12; i++)
    {
        ans *= l - i;
        ans /= i;
    }

    cout << ans << '\n';
    return 0;
}

// int main()
// {
//     int l;
//     cin >> l;

//     __int128_t ans = 1;
//     rep(i, 11)
//     {
//         ans *= (l - 1);
//         l--;
//     }
//     rep(i, 11)
//         ans /= i + 1;

//     cout << (ll)ans << '\n';
//     return 0;
// }
