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
    int n, m, k;
    cin >> n >> m;
    vector<int> a(m), b(m);
    rep(i, m) cin >> a[i] >> b[i];
    cin >> k;
    vector<int> c(k), d(k);
    rep(i, k) cin >> c[i] >> d[i];

    int ans = 0;
    for (int bit = 0; bit < (1 << k); bit++)
    {
        vector<int> bowl(n + 1, 0);
        rep(i, k)
        {
            if (bit & (1 << i))
                bowl[c[i]]++;
            else
                bowl[d[i]]++;
        }
        int tmp = 0;
        rep(i, m)
            tmp += (bowl[a[i]] && bowl[b[i]]);
        ans = max(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}