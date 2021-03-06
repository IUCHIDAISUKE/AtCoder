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

int keta(int n)
{
    int res = 0;
    while (n)
    {
        res++;
        n /= 10;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i < n + 1; i += 2)
    {
        int j = 1, cnt = 0;
        while (j < i + 1)
        {
            if (i % j == 0)
                cnt++;
            j++;
        }
        ans += (cnt == 8);
    }

    cout << ans << "\n";
    return 0;
}