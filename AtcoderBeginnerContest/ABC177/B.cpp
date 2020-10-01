#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    string s, t;
    cin >> s >> t;

    int ans = 1001001001;
    for (int i = 0; i < s.size() - t.size() + 1; i++)
    {
        int cnt = 0;
        rep(j, t.size())
        {
            if (t[j] == s[j + i])
            {
                cnt++;
            }
            ans = min(ans, (int)t.size() - cnt);
        }
    }
    cout << ans << '\n';
    return 0;
}
