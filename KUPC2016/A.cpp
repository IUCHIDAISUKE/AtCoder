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
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> t(n);
    rep(i, n) cin >> t[i];

    int ans = n;
    rep(i, n)
    {
        if (a <= t[i] & t[i] < b)
            ans--;
    }
    cout << ans << "\n";
    return 0;
}
