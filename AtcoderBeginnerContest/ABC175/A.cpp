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

    bool p = s[0] == 'R';
    bool q = s[1] == 'R';
    bool r = s[2] == 'R';

    if (p and q and r)
    {
        cout << 3 << '\n';
    }
    else if ((p and q) or (q and r))
    {
        cout << 2 << '\n';
    }
    else if (p or q or r)
    {
        cout << 1 << '\n';
    }
    else
    {
        cout << 0 << '\n';
    }

    return 0;
}
