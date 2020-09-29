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
        if (!i)
        {
            if ('a' <= s[i] && s[i] <= 'z')
            {
                s[i] = s[i] - 'a' + 'A';
            }
        }
        else if ('A' <= s[i] && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';
        }
    }

    cout << s << '\n';
    return 0;
}
