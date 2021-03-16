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
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n), d(n), e(n);
    rep(i, n) cin >> a[i] >> b[i] >> c[i] >> d[i] >> e[i];

    ll ans = 0;
    rep(i, n)
    {
        ll tmp = (a[i] + b[i] + c[i] + d[i]) * 900 + e[i] * 110;
        ans = max(ans, tmp);
    }
    printf("%.10f\n", 1. * ans / 900);
}