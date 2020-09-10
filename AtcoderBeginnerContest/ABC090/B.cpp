#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int a, b;
    cin >> a >> b;

    string s = "";
    int ans = 0, tmp;
    rep2(i, a, b + 1)
    {
        tmp = i;
        s = "";
        while (tmp)
        {
            s += tmp % 10 + '0';
            tmp /= 10;
        }
        string t = s;
        reverse(all(s));
        if (s == t)
        {
            ans++;
        }
    }

    cout << ans << endl;
    return (0);
}
