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

int main()
{
    ll n, p;
    cin >> n >> p;

    map<ll, ll> mp;
    ll tmp = p;
    for (ll i = 2; i * i < p + 1; i++)
    {
        if (tmp % i != 0)
            continue;
        while (tmp % i == 0)
        {
            mp[i]++;
            tmp /= i;
        }
    }
    if (tmp != 1)
        mp[tmp]++;

    ll ans = 1;
    for (auto itr : mp)
    {
        if (itr.second / n == 0)
            continue;
        int cnt = itr.second / n;
        while (cnt--)
            ans *= itr.first;
    }
    cout << ans << "\n";
    return 0;
}