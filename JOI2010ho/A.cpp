#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;

const int N_MAX = 3010;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n - 1), b(m);
    rep(i, n - 1) cin >> a[i];
    rep(i, m) cin >> b[i];

    vector<int> cum(n, 0);
    rep(i, n - 1) cum[i + 1] = cum[i] + a[i];

    int pos = 0, res = 0;
    rep(i, m)
    {
        res += abs(cum[b[i] + pos] - cum[pos]);
        res %= (int)1e5;
        pos += b[i];
    }

    cout << res << '\n';
    return 0;
}
