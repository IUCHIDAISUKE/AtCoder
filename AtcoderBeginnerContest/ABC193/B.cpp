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
    vector<int> a(n), p(n), x(n);
    rep(i, n) cin >> a[i] >> p[i] >> x[i];

    rep(i, n)
    {
        x[i] -= a[i];
        x[i] = max(x[i], 0);
    }

    int ans = 1001001001;
    rep(i, n)
    {
        if (x[i])
            ans = min(p[i], ans);
    }
    cout << (ans == 1001001001 ? -1 : ans) << "\n";
    return 0;
}
