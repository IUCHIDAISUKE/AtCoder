#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll MOD = 1000000007;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int ans = 0;
    int tmp = 0;
    rep(i, n)
    {
        ans = (ans + (ll)a[i] * tmp) % MOD;
        tmp = (tmp + a[i]) % MOD;
    }
    cout << ans << '\n';

    return 0;
}
