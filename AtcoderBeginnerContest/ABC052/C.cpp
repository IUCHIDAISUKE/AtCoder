#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF_L = 1LL << 60;
const int INF_I = 1 << 30;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

// vector<P> prime_factorize(int n)
// {
//     vector<P> res;
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i != 0)
//             continue;
//         int ex = 0;
//         while (n % i == 0)
//         {
//             ex++;
//             n /= i;
//         }
//         res.push_back({i, ex});
//     }
//     if (n != 1)
//         res.push_back({n, 1});
//     return (res);
// }

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int tmp = i + 1;
        for (int j = 2; j * j <= n; j++)
        {
            while (tmp % j == 0)
            {
                tmp /= j;
                mp[j]++;
            }
        }
        if (tmp != 1)
            mp[tmp]++;
    }
    ll ans = 1;
    for (auto a : mp)
        ans = (ans * (a.second + 1)) % MOD;
    cout << ans << "\n";
}

int main()
{
    solve();
    // ll n;
    // cin >> n;

    // map<int, int> mp;
    // rep(i, n)
    // {
    //     vector<P> tmp = prime_factorize(i + 1);
    //     rep(i, tmp.size())
    //         mp[tmp[i].first] += tmp[i].second;
    // }
    // ll ans = 1;
    // for (auto a : mp)
    //     ans = (ans * (a.second + 1)) % MOD;
    // cout << ans << "\n";
    return 0;
}
