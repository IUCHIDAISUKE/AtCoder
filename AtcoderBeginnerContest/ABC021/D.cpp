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

ll modpow(ll num, ll p)
{
    if (p == 0)
        return 1;
    if (p % 2 == 0)
    {
        ll halfP = p / 2;
        ll half = modpow(num, halfP);
        return half * half % MOD;
    }
    else
        return num * modpow(num, p - 1) % MOD;
}

ll calcComb(ll a, ll b)
{
    if (b > a - b)
        calcComb(a, a - b);
    ll ansMul = 1, ansDiv = 1;
    rep(i, b)
    {
        ansMul = ansMul * (a - i) % MOD;
        ansDiv = ansDiv * (i + 1) % MOD;
    }
    ll ans = ansMul * modpow(ansDiv, MOD - 2) % MOD;
    return ans;
}

int main()
{
    ll n, k;
    cin >> n >> k;

    cout << calcComb(n - 1 + k, k) << "\n";
    return 0;
}
