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
    ll n, a, b;
    cin >> n >> a >> b;

    ll tmp = b - a;
    if (tmp & 1)
    {
        ll num;
        num = min(a - 1, n - b) + 1 + (tmp - 1) / 2;
        cout << num << '\n';
    }
    else
        cout << tmp / 2 << '\n';
    return 0;
}
