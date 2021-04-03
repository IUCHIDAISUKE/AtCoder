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
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

int main()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> l(m), r(m), pp(q), qq(q);
    rep(i, m) cin >> l[i] >> r[i];
    rep(i, q) cin >> pp[i] >> qq[i];

    vector<vector<int>> cum(n + 1, vector<int>(n + 1));
    rep(i, m) cum[l[i]][r[i]]++;
    rep(i, n) rep(j, n) cum[i + 1][j + 1] += cum[i + 1][j] + cum[i][j + 1] - cum[i][j];

    rep(i, q)
            cout
        << cum[qq[i]][qq[i]] - cum[qq[i]][pp[i] - 1] - cum[pp[i] - 1][qq[i]] + cum[pp[i] - 1][pp[i] - 1] << "\n";

    return 0;
}
