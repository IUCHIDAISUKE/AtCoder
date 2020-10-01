#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    ll tmp = 1;
    rep(i, n)
    {
        if (a[i] == 0)
        {
            cout << 0 << '\n';
            return 0;
        }
    }
    rep(i, n)
    {
        if (tmp <= (ll)1e18 / a[i])
        {
            tmp *= a[i];
        }
        else
        {
            cout << -1 << '\n';
            return 0;
        }
    }
    cout << tmp << '\n';
    return 0;
}
