#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

using namespace std;
using ll = int64_t;
using P = pair<int, int>;

const ll INF_L = 1LL << 60;
const int INF_I = 1 << 30;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans = -1000;
    for (int i = a; i < b + 1; i++)
    {
        for (int j = c; j < d + 1; j++)
        {
            ans = max(ans, i - j);
        }
    }

    cout << ans << "\n";
    return 0;
}