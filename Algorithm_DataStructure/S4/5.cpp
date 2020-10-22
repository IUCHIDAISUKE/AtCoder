#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

ll ans, k, d;
string tmp = "357";

void dfs(string str)
{
    if (str.size() > d)
    {
        return;
    }
    else
    {
        if (count(all(str), '3') && count(all(str), '5') && count(all(str), '7'))
        {
            if (stoll(str) <= k)
            {
                ans++;
                cout << str << endl;
            }
        }
    }

    rep(i, 3)
    {
        string t;
        t += str + tmp[i];
        dfs(t);
    }
    return;
}

int main()
{
    cin >> k >> d;
    dfs("");
    cout << ans << '\n';
    return 0;
}
