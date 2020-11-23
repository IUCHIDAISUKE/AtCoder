#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int MOD = 998244353;

int main()
{
    string s;
    cin >> s;

    for (char c : s)
        if ('0' <= c && c <= '9')
            cout << c;

    cout << '\n';
    return 0;
}
