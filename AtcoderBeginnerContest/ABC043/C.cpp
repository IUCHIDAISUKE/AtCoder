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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int ans = 1001001001;
    for (int x = -100; x < 100 + 1; x++)
    {
        int tmp = 0;
        rep(i, n)
            tmp += (a[i] - x) * (a[i] - x);
        ans = min(ans, tmp);
    }
    cout << ans << "\n";
    return 0;
}