#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    string a, b, c;
    cin >> n >> a >> b >> c;

    int ans = 0;
    rep(i, n)
    {
        map<char, int> mp;
        mp[a[i]]++;
        mp[b[i]]++;
        mp[c[i]]++;
        if (mp.size() == 1)
            continue;
        else if (mp.size() == 2)
            ans++;
        else
            ans += 2;
    }
    cout << ans << '\n';

    return 0;
}
