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
    vector<int> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];

    rep(i, n)
    {
        rep2(j, i + 1, n)
        {
            rep2(k, j + 1, n)
            {
                int dx = (x[j] - x[i]), dy = (y[j] - y[i]);
                int ddx = (x[k] - x[i]), ddy = (y[k] - y[i]);
                if ((dx * ddy) == (dy * ddx))
                {
                    cout << "Yes" << '\n';
                    return 0;
                }
            }
        }
    }
    cout << "No" << '\n';
    return 0;
}
