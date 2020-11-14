#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;

ll f(ll h)
{
    if (h == 1)
    {
        return 1;
    }
    return f(h / 2) * 2 + 1;
}

int main()
{
    ll h;
    cin >> h;

    cout << f(h) << '\n';
    return 0;
}
