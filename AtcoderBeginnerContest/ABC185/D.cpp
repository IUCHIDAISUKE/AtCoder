#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    rep(i, m) cin >> a[i];

    sort(all(a));
    a.push_back(n + 1);
    int cur = 1;
    vector<int> wid;
    rep(i, m + 1)
    {
        int z = a[i] - cur;
        if (z != 0)
            wid.push_back(z);
        cur = a[i] + 1;
    }
    int k = 1001001001;
    for (int w : wid)
        k = min(k, w);
    int ans = 0;
    for (int w : wid)
        ans += (w + k - 1) / k;
    cout << ans << "\n";
    return 0;
}