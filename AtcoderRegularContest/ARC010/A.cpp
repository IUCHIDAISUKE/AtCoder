#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    vector<int> c(n);
    rep(i, m) cin >> c[i];

    rep(i, m)
    {
        if (n <= a)
        {
            n += b;
        }
        n -= c[i];
        if (n < 0)
        {
            cout << i + 1 << '\n';
            return 0;
        }
    }
    cout << "complete" << '\n';
    return 0;
}
