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

ll modpow(ll num, int p)
{
    if (p == 0)
        return 1;
    if (p % 2 == 0)
    {
        int halfP = p / 2;

        ll half = modpow(num, halfP);
        return half * half % MOD;
    }
    else
        return num * modpow(num, p - 1) % MOD;
}

ll calcComb(int a, int b)
{
    if (b > a - b)
        return calcComb(a, a - b);
    ll ansMul = 1, ansDiv = 1;
    rep(i, b)
    {
        ansMul *= (a - i);
        ansDiv *= (i + 1);
        ansMul %= MOD;
        ansDiv %= MOD;
    }
    ll ans = ansMul * modpow(ansDiv, MOD - 2) % MOD;
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;

    map<int, int> prime;
    int tmp = m;
    for (int i = 2; i * i <= m; i++)
    {
        while (tmp % i == 0)
        {
            tmp /= i;
            prime[i]++;
        }
    }
    if (tmp != 1)
        prime[tmp]++;

    ll ans = 1;
    for (auto tmp : prime)
    {
        ans *= calcComb(tmp.second + n - 1, n - 1);
        ans %= MOD;
    }
    cout << ans << "\n";
    return 0;
}
