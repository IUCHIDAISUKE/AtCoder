#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int N_MAX = 15;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> x(m), y(m);
    rep(i, m) cin >> x[i] >> y[i];
    vector<vector<bool>> con(N_MAX, vector<bool>(N_MAX, false));
    rep(i, m) con[x[i] - 1][y[i] - 1] = con[y[i] - 1][x[i] - 1] = true;

    int ans = 0;

    for (int bit = 0; bit < (1 << n); bit++)
    {
        int t = bitset<32>(bit).count();
        if (t <= ans)
            continue;

        bool ok = true;
        rep(i, n)
        {
            if (!ok)
                break;
            rep(j, i)
            {
                if ((bit & (1 << i)) && (bit & (1 << j)) && !con[i][j])
                {
                    ok = false;
                    break;
                }
            }
        }
        if (ok)
            ans = max(ans, t);
    }
    cout << ans << '\n';
    return 0;
}
