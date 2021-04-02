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

int n, m, q;
vector<int> a, b, c, d;
int ans;

void dfs(vector<int> A)
{
    if (A.size() == n + 1)
    {
        int res = 0;
        rep(i, q)
        {
            if (A[b[i]] - A[a[i]] == c[i])
                res += d[i];
        }
        ans = max(ans, res);
        return;
    }

    A.push_back(A.back());
    while (A.back() < m + 1)
    {
        dfs(A);
        A.back()++;
    }
}

int main()
{
    cin >> n >> m >> q;
    a = b = c = d = vector<int>(q);
    rep(i, q) cin >> a[i] >> b[i] >> c[i] >> d[i];

    dfs(vector<int>(1, 1));
    cout << ans << "\n";
    return 0;
}