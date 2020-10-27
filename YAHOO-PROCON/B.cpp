#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    map<int, int> mp;
    rep(i, 3)
    {
        int a, b;
        cin >> a >> b;
        mp[a]++;
        mp[b]++;
    }

    cout << ((mp[1] == 1 && mp[2] == 2 && mp[3] == 2 && mp[4] == 1) ? "YES" : "NO") << '\n';

    return 0;
}
