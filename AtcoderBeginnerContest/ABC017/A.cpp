#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    vector<int> s(3), e(3);
    rep(i, 3) cin >> s[i] >> e[i];

    int ans = 0;
    rep(i, 3) ans += s[i] * e[i] / 10;

    cout << ans << '\n';

    return 0;
}
