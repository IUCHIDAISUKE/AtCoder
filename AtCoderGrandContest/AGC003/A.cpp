#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;

int main()
{
    string s;
    cin >> s;

    string ans = "Yes";
    map<char, int> dis;
    rep(i, s.size())
        dis[s[i]]++;
    if (dis['N'])
        if (!dis['S'])
            ans = "No";
    if (dis['S'])
        if (!dis['N'])
            ans = "No";
    if (dis['E'])
        if (!dis['W'])
            ans = "No";
    if (dis['W'])
        if (!dis['E'])
            ans = "No";
    cout << ans << '\n';
    return 0;
}
