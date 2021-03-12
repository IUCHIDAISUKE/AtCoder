#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

using namespace std;
using ll = int64_t;
using P = pair<int, int>;

const ll INF_L = 1LL << 60;
const int INF_I = 1 << 30;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

bool is_prime(ll n)
{
    if (n <= 1)
        return (false);
    for (ll i = 2; i * i < n + 1; i++)
    {
        if (n % i == 0)
            return (false);
    }
    return (true);
}

int main()
{
    string s;
    cin >> s;

    vector<int> p = {1, 3, 5, 7, 9};

    int cnt = 0;
    map<char, ll> mp;
    for (char c : s)
    {
        if (!(mp.count(c)))
        {
            mp[c] = cnt;
            cnt++;
        }
    }

    if (cnt > 5)
    {
        cout << -1 << "\n";
        return (0);
    }
    ll ans = -1;
    do
    {
        ll num = 0;
        for (char c : s)
        {
            num *= 10;
            num += p[mp[c]];
        }
        if (is_prime(num))
            ans = num;
    } while (next_permutation(all(p)));

    cout << ans << "\n";
    return 0;
}

// int main()
// {
//     string s;
//     cin >> s;

//     set<char> st;
//     vector<int> p = {1, 3, 5, 7, 9};
//     rep(i, s.size()) st.insert(s[i]);
//     if (st.size() > 5)
//     {
//         cout << -1 << "\n";
//         return (0);
//     }

//     ll ans = -1;
//     do
//     {
//         map<char, ll> mp;
//         int cur = 0;
//         for (auto i : st)
//             mp[i] = p[cur++];
//         ll num = 0;
//         for (char c : s)
//         {
//             num *= 10;
//             num += mp[c];
//         }
//         if (is_prime(num))
//             ans = num;
//     } while (next_permutation(all(p)));

//     cout << ans << "\n";
//     return 0;
// }
