#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int MOD = (int)1e9 + 7;

int main()
{
    ll n, m, t;
    cin >> n >> m >> t;
    vector<int> a(m), b(m);
    rep(i, m) cin >> a[i] >> b[i];

    bool flag = true;
    ll tmp = n;
    rep(i, m)
    {
        if (i)
            n -= a[i] - b[i - 1];
        else
            n -= a[i];
        if (n <= 0)
            flag = false;
        n += (b[i] - a[i]);
        n = min(n, tmp);
    }
    n -= (t - b.back());
    if (n <= 0)
        flag = false;
    cout << ((flag) ? "Yes" : "No") << '\n';
    return 0;
}
