#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{

    vector<string> s(12);
    rep(i, 12) cin >> s[i];

    int ans = 0;
    rep(i, 12)
    {
        if (s[i].find('r') != -1)
        {
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}
