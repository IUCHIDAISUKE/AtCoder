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
    ll a, b, c;
    cin >> a >> b >> c;
    if (c - a - b > 0 && 4 * a * b < (c - a - b) * (c - a - b))
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
}
