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
    int a, b;
    cin >> a >> b;

    int n_a = 0, n_b = 0;
    while (a)
    {
        n_a += a % 10;
        a /= 10;
    }
    while (b)
    {
        n_b += b % 10;
        b /= 10;
    }
    cout << max(n_a, n_b) << '\n';
    return 0;
}
