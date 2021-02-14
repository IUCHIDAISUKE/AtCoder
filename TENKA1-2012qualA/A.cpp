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
    int n;
    cin >> n;

    int ans = 1;
    vector<ll> fib(50, 0);
    fib[0] = 1, fib[1] = 1;
    rep(i, 45) fib[i + 2] = fib[i] + fib[i + 1];
    cout << fib[n] << "\n";
    return 0;
}
