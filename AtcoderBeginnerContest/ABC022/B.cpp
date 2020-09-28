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
    map<int, int> mp;
    rep(i, n)
    {
        int a;
        cin >> a;
        mp[a]++;
    }

    int ans = 0;
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        ans += itr->second - 1;
    }

    cout << ans << '\n';
    return 0;
}
