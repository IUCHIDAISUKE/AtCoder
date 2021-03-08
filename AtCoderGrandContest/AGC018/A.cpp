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

template <typename T> // template <class T> is same
T gcd(T a, T b)
{
    return ((b == 0) ? a : gcd(b, a % b));
}

template <typename T>
T lcm(T a, T b)
{
    return a / gcd(a, b) * b;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int gc = a[0], ma = 0;
    rep(i, n) ma = max(ma, a[i]);
    rep(i, n) gc = gcd(gc, a[i]);
    if (ma < k)
    {
        cout << "IMPOSSIBLE"
             << "\n";
        return 0;
    }
    cout << ((k % gc == 0) ? "POSSIBLE" : "IMPOSSIBLE") << "\n";

    return 0;
}
