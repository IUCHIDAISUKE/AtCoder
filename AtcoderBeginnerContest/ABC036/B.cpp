#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    rep(i, n)
    {
        rep(j, n)
        {
            cout << s[n - j - 1][i];
        }
        cout << '\n';
    }
    cout << '\n';

    return 0;
}
