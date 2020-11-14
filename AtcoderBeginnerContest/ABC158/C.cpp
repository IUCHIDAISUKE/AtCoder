#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = -1;
    rep2(i, 1, 3000)
    {
        if (i * 8 / 100 == a && i * 10 / 100 == b)
        {
            ans = i;
            break;
        }
    }

    cout << ans << '\n';
    return 0;
}
