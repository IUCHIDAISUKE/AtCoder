#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    string t;
    cin >> t;

    rep(i, t.size())
            cout
        << ((t[i] == '?') ? 'D' : t[i]);
    cout << '\n';

    return 0;
}
