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

int main()
{
    int n, q;
    cin >> n >> q;
    vector<ll> a(n), c(q);
    rep(i, n) cin >> a[i];
    rep(i, q) cin >> c[i];

    vector<ll> cum(n, 0);
    rep(i, n - 1) cum[i + 1] = cum[i] + modpow(a[i], a[i + 1]);
    ll ans = 0;
    int s = 0;
    rep(i, q)
    {
        ans += abs(cum[c[i] - 1] - cum[s]);
        ans %= MOD;
        s = c[i] - 1;
    }
    ans = (ans + cum[s]) % MOD;

    cout << ans << "\n";
    return 0;
}
