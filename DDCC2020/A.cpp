#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int prize(int n)
{
    if (n == 1)
        return 300000;
    else if (n == 2)
        return 200000;
    else if (n == 3)
        return 100000;
    else
        return 0;
}

int main()
{
    int x, y;
    cin >> x >> y;

    int ans = 0;
    if (x == 1 && y == 1)
        ans += 400000;
    ans += prize(x);
    ans += prize(y);

    cout << ans << '\n';

    return 0;
}
