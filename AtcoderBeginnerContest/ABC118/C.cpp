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

int gcd(int a, int b)
{
    return ((b == 0) ? a : gcd(b, a % b));
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int b = gcd(a[0], a[1]);
    for (int i = 2; i < n; i++)
        b = gcd(b, a[i]);
    cout << b << "\n";

    return 0;
}