#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
#define all2(a, b) (a).begin(), (a).begin() + (b)
#define debug(vari) cerr << #vari << " = " << (vari) << endl;

int main()
{
    string str;
    cin >> str;
    int ans = 0;
    rep(i, 3)
    {
        if (str[i] == '1')
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
