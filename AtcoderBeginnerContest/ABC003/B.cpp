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

    string u = "@atcoder";

    bool ok = true;
    rep(i, s.size())
    {
        if (s[i] == '@')
        {
            if (u.find(t[i]) == -1)
            {
                ok = false;
            }
        }
        else if (t[i] == '@')
        {
            if (u.find(s[i]) == -1)
            {
                ok = false;
            }
        }
        else if (s[i] != t[i])
        {
            ok = false;
        }
    }

    cout << (ok ? "You can win" : "You will lose") << '\n';
    return 0;
}
