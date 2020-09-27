#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n;
    cin >> n;
    vector<int> w(n);
    rep(i, n) cin >> w[i];

    int s = 0;
    rep(i, n) s += w[i];

    int res = 0;
    int ans = 1001001001;
    rep(i, n - 1)
    {
        res += w[i];
        ans = min(abs(s - 2 * res), ans);
    }

    cout << ans << '\n';
    return 0;
}
