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
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    ll ans = INF_L;
    for (int bit = 0; bit < (1 << n); bit++)
    {
        ll ma = 0, tmp = 0;
        rep(i, n)
        {
            if (bit & (1 << i))
            {
                if (a[i] > ma)
                    ma = a[i];
                else
                {
                    ma++;
                    tmp += ma - a[i];
                }
            }
            else
                ma = max(a[i], ma);
        }
        if (__builtin_popcount(bit) >= k)
            ans = min(ans, tmp);
    }

    cout << ans << "\n";
    return 0;
}