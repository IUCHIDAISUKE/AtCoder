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

    string ans;
    int tmp = 0;
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        if (tmp <= itr->second)
        {
            tmp = itr->second;
            ans = itr->first;
        }
    }

    cout << ans << '\n';
    return 0;
}
