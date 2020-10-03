#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n;
    string s;
    cin >> n >> s;

    if (n & 1)
    {
        cout << "No" << '\n';
        return 0;
    }

    if (s.substr(0, s.size() / 2) != s.substr(s.size() / 2))
    {
        cout << "No" << '\n';
    }
    else
    {
        cout << "Yes" << '\n';
    }
    return 0;
}
