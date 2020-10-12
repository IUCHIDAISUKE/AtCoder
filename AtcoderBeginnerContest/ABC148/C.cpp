#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

ll gcd(ll a, ll b)
{
    return (!b ? a : (gcd(b, a % b)));
}

int main()
{
    ll a, b;
    cin >> a >> b;

    cout << a / gcd(a, b) * b << '\n';
    return 0;
}
