#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

using namespace std;
using ll = long long int;
using P = pair<int, int>;

const ll INF_L = 1LL << 60;
const int INF_I = 1 << 30;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
int dx[] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[] = {0, -1, 0, 1, 1, -1, -1, 1};

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        int j = n - i;
        ans++;
        if (i != j)
            ans++;
    }

    cout << ans << "\n";
    return 0;
}
