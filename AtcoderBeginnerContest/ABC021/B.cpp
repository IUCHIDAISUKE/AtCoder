#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{

    int n, a, b, k;
    cin >> n >> a >> b >> k;
    map<int, int> mp;
    rep(i, k)
    {
        int p;
        cin >> p;
        mp[p]++;
    }

    string ans = "YES";
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        if (itr->first == a || itr->first == b)
        {
            ans = "NO";
        }
        if (itr->second >= 2)
        {
            ans = "NO";
        }
    }

    cout << ans << '\n';
    return 0;
}
