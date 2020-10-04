#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n;
    cin >> n;
    vector<double> a(n);
    rep(i, n) cin >> a[i];

    double up = 1, down = 0;
    rep(i, n)
    {
        up *= a[i];
        double tmp = 1;
        rep(j, n)
        {
            if (i != j)
            {
                tmp *= a[j];
            }
        }
        down += tmp;
    }

    printf("%.5lf\n", up / down);
    return 0;
}
