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
    int n, m;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    cin >> m;
    vector<int> b(m);
    rep(i, m) cin >> b[i];

    int tmp_a = 1, tmp_b = 1;
    rep(i, n) tmp_a *= a[i];
    rep(i, m) tmp_b *= b[i];
    cout << (tmp_a == tmp_b ? "Yes" : "No") << "\n";
}