#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF_L = 1LL << 60;
const int INF_I = 1 << 30;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

int main()
{
    int n;
    cin >> n;
    n = 1000 - n;

    int res = 0;
    const int v[] = {1, 5, 10, 50, 100, 500};
    for (int i = 5; i >= 0; i--)
    {
        int tmp = n / v[i];
        res += tmp;
        n -= tmp * v[i];
    }

    cout << res << "\n";
    return 0;
}