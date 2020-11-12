#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int MOD = 998244353;

int solve(vector<ll> abc)
{
    ll ans = 1;
    rep(i, 3)
    {
        ll tmp = abc[i] * (abc[i] + 1) / 2 % MOD;
        ans = ans * tmp % MOD;
    }
    return ans;
}

int main()
{
    vector<ll> abc(3);
    rep(i, 3) cin >> abc[i];

    int ans = solve(abc);
    cout << ans << '\n';
    return 0;
}
