#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{

    double xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    double s = abs(((xb - xa) * (yc - ya) - (xc - xa) * (yb - ya))) / 2;

    printf("%.5lf\n", s);
    return 0;
}
