#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    vector<ll> cum(n + 1, 0);
    rep(i, n) cum[i + 1] = cum[i] + a[i];

    rep(k, n)
    {
        ll tmp = 0;
        rep(i, n - k)
            tmp = max(tmp, cum[i + k + 1] - cum[i]);
        cout << tmp << '\n';
    }

    return 0;
}
