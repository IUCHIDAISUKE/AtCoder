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
    int r, c;
    cin >> r >> c;
    vector<vector<int>> a(r, vector<int>(c));
    rep(i, r) rep(j, c) cin >> a[i][j];

    int ans = 0;
    vector<vector<int>> tmp;
    for (int bit = 0; bit < (1 << r); bit++)
    {
        tmp = a;
        rep(i, r)
        {
            if (bit & (1 << i))
                rep(j, c) tmp[i][j] = 1 - tmp[i][j];
        }
        int cnt = 0;
        rep(i, c)
        {
            int t = 0;
            rep(j, r) t += tmp[j][i];
            cnt += max(t, r - t);
        }
        ans = max(ans, cnt);
    }
    cout << ans << "\n";
    return 0;
}
