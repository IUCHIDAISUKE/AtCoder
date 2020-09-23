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

    // cout << (s[2] == s[3] and s[4] == s[5] and s[3] != s[4] and s[0] != s[2] and s[1] != s[4] ? "Yes" : "No") << '\n';
    cout << (s[2] == s[3] and s[4] == s[5] ? "Yes" : "No") << '\n';
    return 0;
}
