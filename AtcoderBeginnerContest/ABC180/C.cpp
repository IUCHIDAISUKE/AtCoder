#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll n;
    cin >> n;
    vector<ll> x;

    for (ll i = 1; i * i <= n; i++)
    {
        if (!(n % i))
        {
            x.push_back(i);
            if (i != n / i)
                x.push_back(n / i);
        }
    }

    sort(all(x));
    rep(i, x.size()) cout << x[i] << '\n';

    return 0;
}
