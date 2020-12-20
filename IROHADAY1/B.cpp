#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int MOD = (int)1e9 + 7;

int main()
{
    string s;
    int n;
    cin >> s >> n;

    string ans = "";
    int tmp = n % s.size();
    rep(i, s.size())
    {
        if (i >= tmp)
            ans += s[i];
    }
    rep(i, tmp) ans += s[i];
    cout << ans << '\n';

    return 0;
}
