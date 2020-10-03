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

    int ans = 0;
    rep(i, s.size() / 2)
    {
        if (s[i] != s[s.size() - 1 - i])
            ans++;
    }
    cout << ans << '\n';
    return 0;
}
