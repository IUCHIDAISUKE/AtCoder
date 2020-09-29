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

    string u = "aiueo";

    rep(i, s.size())
    {
        if (u.find(s[i]) == -1)
        {
            cout << s[i];
        }
    }
    cout << '\n';
    return 0;
}
