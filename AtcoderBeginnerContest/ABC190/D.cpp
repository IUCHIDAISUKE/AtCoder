#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

using namespace std;
using ll = long long int;
using P = pair<int, int>;

const ll INF_L = 1LL << 60;
const int INF_I = 1 << 30;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

int main()
{
    ll n;
    cin >> n;

    ll n2 = 2 * n;
    int ans = 0;
    for (ll i = 1; i * i <= n2; i++)
    {
        if (n2 % i)
            continue;
        ll a = n2 / i;
        if (abs(a - (i + 1)) % 2 == 0)
            ans++;
    }

    cout << ans * 2 << "\n";
}

// int main()
// {
//     ll n;
//     cin >> n;

//     ll ans = 0;
//     vector<ll> div;
//     ll n2 = n * 2;
//     for (ll i = 1; i * i < n2 + 1; i++)
//     {
//         if (n2 % i)
//             continue;
//         div.push_back(i);
//         if (n2 / i != i)
//             div.push_back(n2 / i);
//     }
//     for (ll d : div)
//     {
//         ll m = n2 / d;
//         if (abs(m - d) % 2)
//             ans++;
//     }

//     cout << ans << "\n";
// }