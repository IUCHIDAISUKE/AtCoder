#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    rep(i, n) cin >> p[i];

    sort(all(p));
    int ans = 0;
    rep(i, k) ans += p[i];
    cout << ans << '\n';

    return 0;
}
