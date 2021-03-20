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

int gcd(int a, int b)
{
    return (b == 0 ? a : gcd(b, a % b));
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<int> l(n + 1, 0), r(n + 1, 0);
    rep(i, n) l[i + 1] = gcd(l[i], a[i]);
    for (int i = n - 1; i >= 0; i--)
        r[i] = gcd(r[i + 1], a[i]);

    int ans = 0;
    rep(i, n)
    {
        int tmp = gcd(l[i], r[i + 1]);
        ans = max(tmp, ans);
    }

    cout << ans << "\n";
    return 0;
}