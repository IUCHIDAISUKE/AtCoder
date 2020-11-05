#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll x, y;
    cin >> x >> y;
    if (x % y == 0)
    {
        cout << -1 << '\n';
        return 0;
    }
    int n = 1;
    while (x % y == 0)
    {
        x *= n;
        n++;
    }
    cout << x << '\n';
    return 0;
}
