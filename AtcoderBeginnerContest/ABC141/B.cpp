#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    string s;
    cin >> s;

    rep(i, s.size())
    {
        bool ck = false;
        if (i & 1)
        {
            if (s[i] == 'L' || s[i] == 'U' || s[i] == 'D')
            {
                ck = true;
            }
        }
        else
        {
            if (s[i] == 'R' || s[i] == 'U' || s[i] == 'D')
            {
                ck = true;
            }
        }
        if (!ck)
        {
            cout << "No" << '\n';
            return 0;
        }
    }
    cout << "Yes" << '\n';
    return 0;
}
