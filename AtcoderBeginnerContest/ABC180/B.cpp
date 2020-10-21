#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<ll> x(n);
    rep(i, n) cin >> x[i];

    ll ma, che;
    double eu;
    ma = eu = 0;
    rep(i, n) ma += abs(x[i]);
    rep(i, n) eu += x[i] * x[i];
    eu = sqrt(eu);
    che = abs(x[0]);
    rep(i, n) che = max(che, abs(x[i]));

    printf("%ld\n%.10lf\n%ld\n", ma, eu, che);
    return 0;
}
