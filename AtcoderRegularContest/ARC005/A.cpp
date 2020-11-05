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
    vector<string> v(n);
    rep(i, n) cin >> v[i];

    vector<string> v2 = {
        "TAKAHASHIKUN",
        "Takahashikun",
        "takahashikun",
        "TAKAHASHIKUN.",
        "Takahashikun.",
        "takahashikun.",
    };

    int ans = 0;
    rep(i, n)
    {
        rep(j, 6)
        {
            if (v[i] == v2[j])
                ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}
