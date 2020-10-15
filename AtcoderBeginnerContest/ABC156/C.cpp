#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    rep(i, n) cin >> x[i];

    sort(all(x));
    int ans = 1001001001;
    rep2(place, 1, 100 + 1)
    {
        int tmp = 0;
        rep(i, n)
            tmp += (place - x[i]) * (place - x[i]);
        ans = min(ans, tmp);
    }

    cout << ans << '\n';
    return 0;
}
