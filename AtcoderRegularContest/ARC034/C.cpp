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

map<ll, ll> factrize(int a, int b)
{
    map<ll, ll> fact;
    for (int i = b + 1; i < a + 1; i++)
    {
        int tmp = i;
        for (int j = 2; j * j < i + 1; j++)
        {
            while (tmp % j == 0)
            {
                fact[j]++;
                tmp /= j;
            }
        }
        if (tmp != 1)
            fact[tmp]++;
    }
    return (fact);
}

int main()
{
    ll a, b;
    cin >> a >> b;

    map<ll, ll> fact;
    fact = factrize(a, b);
    ll ans = 1;
    for (auto f : fact)
    {
        ans *= (f.second + 1);
        ans %= MOD;
    }

    cout << ans << "\n";
}