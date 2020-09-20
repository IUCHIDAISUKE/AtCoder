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
    vector<string> s(n);
    vector<int> p(n);
    rep(i, n) cin >> s[i] >> p[i];

    int num = 0;
    rep(i, n) num += p[i];
    string ans = "atcoder";
    rep(i, n)
    {
        if (p[i] >= num / 2 + 1)
        {
            ans = s[i];
        }
    }

    cout << ans << '\n';
    return 0;
}
