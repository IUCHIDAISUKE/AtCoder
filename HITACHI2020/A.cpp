#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    string s;
    cin >> s;

    int l = s.size();
    int cnt = 0;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == 'h' && s[i + 1] == 'i' && i + 1 < s.size())
        {
            cnt++;
            i++;
        }
    }

    if (l == cnt * 2)
    {
        cout << "Yes" << '\n';
        return 0;
    }
    cout << "No" << '\n';

    return 0;
}
