#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

const double PI = 3.14159265358979;

int main()
{
    int n;
    cin >> n;
    vector<double> r(n);
    rep(i, n) cin >> r[i];
    sort(all(r));
    reverse(all(r));

    int ck[2] = {1, -1};

    double ans = 0;
    rep(i, n) ans += r[i] * r[i] * ck[i & 1];

    printf("%.10lf\n", ans * PI);

    return 0;
}
