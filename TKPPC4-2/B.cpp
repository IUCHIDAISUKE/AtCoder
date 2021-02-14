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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int ans = -1;
    int tmp = 0;
    rep(i, n)
    {
        if (a[i] < k && tmp < a[i])
        {
            ans = i + 1;
            tmp = a[i];
        }
    }
    cout << ans << "\n";
    return 0;
}