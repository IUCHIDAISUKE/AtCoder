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
    map<string, int> mp;
    rep(i, n)
    {
        string s;
        cin >> s;
        mp[s]++;
    }

    vector<string> s = {"AC",
                        "WA",
                        "TLE",
                        "RE"};

    rep(i, 4)
    {
        cout << s[i] << " x " << mp[s[i]] << '\n';
    }
    return 0;
}
