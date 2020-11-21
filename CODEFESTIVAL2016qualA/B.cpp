#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int ans = 0;
    vector<bool> ok(n, true);
    rep(i, n)
    {
        if (ok[i] && (a[a[i] - 1] == i + 1))
        {
            ans++;
            ok[i] = false;
            ok[a[i] - 1] = false;
        }
    }
    cout << ans << '\n';
    return 0;
}
