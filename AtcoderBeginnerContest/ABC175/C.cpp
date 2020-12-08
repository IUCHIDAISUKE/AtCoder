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
    ll x, k, d;
    cin >> x >> k >> d;

    ll ans;
    ll n;
    x = abs(x);
    n = x / d;
    if (n >= k)
        ans = x - d * k;
    else
    {
        if ((k - n) % 2)
            ans = x - d * (n + 1);
        else
            ans = x - d * n;
    }
    cout << abs(ans) << '\n';
}
