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
    ll n, a, b;
    cin >> n >> a >> b;

    ll res;
    if (n == 1)
    {
        if (a == b)
            res = 1;
        else
            res = 0;
    }
    else
    {
        if (a > b)
            res = 0;
        else
            res = b * (n - 2) - a * (n - 2) + 1;
    }

    cout << max(res, 0LL) << "\n";

    return 0;
}