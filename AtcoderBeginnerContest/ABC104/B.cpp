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

    int n = s.size();

    if (s[0] != 'A')
    {
        cout << "WA" << '\n';
        return 0;
    }

    int cnt = 0;
    rep2(i, 2, n - 1)
    {
        if (s[i] == 'C')
            cnt++;
    }
    if (cnt != 1)
    {
        cout << "WA" << '\n';
        return 0;
    }

    rep2(i, 1, n)
    {
        if ('A' <= s[i] && s[i] <= 'Z')
        {
            if (i == 1 || i == n - 1 || s[i] != 'C')
            {
                cout << "WA" << '\n';
                return 0;
            }
        }
    }

    cout << "AC" << '\n';

    return 0;
}
