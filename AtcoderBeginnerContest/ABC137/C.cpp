#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    rep(i, n) sort(all(s[i]));
    map<string, int> mp;
    rep(i, n) mp[s[i]]++;
    ll ans = 0;
    for (auto itr : mp)
        ans += ((ll)itr.second * (itr.second - 1) / 2);

    cout << ans << "\n";
    return 0;
}