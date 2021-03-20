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

int main()
{
    ll n;
    cin >> n;

    vector<ll> fact;
    for (ll i = 1; i * i < n + 1; i++)
    {
        if (n % i)
            continue;
        fact.push_back(i);
        if (i != n / i)
            fact.push_back(n / i);
    }
    map<int, int> prime;
    ll tmp = n;
    for (ll i = 2; i * i < n + 1; i++)
    {
        while (tmp % i == 0)
        {
            prime[i]++;
            tmp /= i;
        }
    }
    if (tmp != 1)
        prime[tmp]++;
    cout << prime.size() << " " << fact.size() - 1 << "\n";
    return 0;
}

// int main()
// {
//     ll n;
//     cin >> n;

//     vector<ll> fact;
//     for (ll i = 1; i * i < n + 1; i++)
//     {
//         if (n % i)
//             continue;
//         fact.push_back(i);
//         if (i != 1 && i != n / i)
//             fact.push_back(n / i);
//     }
//     sort(all(fact));
//     vector<ll> factb;
//     reverse(all(fact));
//     for (ll f : fact)
//     {
//         bool ok = true;
//         for (ll b : factb)
//         {
//             if (b % f == 0)
//                 ok = false;
//         }
//         if (ok)
//             factb.push_back(f);
//     }

//     cout << factb.size() << " " << fact.size() << "\n";
//     return 0;
// }