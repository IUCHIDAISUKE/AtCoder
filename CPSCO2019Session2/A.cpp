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
    int m, n;
    cin >> m >> n;

    if (m % n == 0)
        cout << m / n << "\n";
    else
        cout << m - (m / n) * (n - 1) << "\n";

    return 0;
}