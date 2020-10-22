#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int m, d;
    cin >> m >> d;

    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 22; j <= d; j++)
        {
            if (!(j / 10 >= 2 && j % 10 >= 2))
                continue;
            if (i == (j / 10) * (j % 10))
                ans++;
        }
    }
    cout << ans << '\n';

    return 0;
}
