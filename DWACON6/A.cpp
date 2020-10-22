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
    vector<string> st(n);
    vector<int> t(n);
    rep(i, n) cin >> st[i] >> t[i];
    string x;
    cin >> x;

    int ti;
    rep(i, n) if (x == st[i]) ti = i + 1;

    int ans = 0;
    rep2(i, ti, n) ans += t[i];
    cout << ans << '\n';

    return 0;
}
