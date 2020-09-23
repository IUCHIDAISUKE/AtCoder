#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    string s, t, u;
    int a, b;
    cin >> s >> t >> a >> b >> u;
    if (s == u)
    {
        cout << a - 1 << ' ' << b << '\n';
    }
    else
    {
        cout << a << ' ' << b - 1 << '\n';
    }
    return 0;
}
