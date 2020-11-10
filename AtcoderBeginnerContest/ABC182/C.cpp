#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

// int main()
// {
//     string s;
//     cin >> s;

//     vector<int> v(3, 0);
//     rep(i, s.size()) v[(s[i] - '0') % 3]++;
//     int su = v[1] + v[2] * 2;
//     int cnt = v[0] + v[1] + v[2];

//     int ans = 0;
//     if (su % 3 == 0)
//         ans = 0;
//     else if (su % 3 == 1)
//     {
//         if (v[1] >= 1 && cnt > 1)
//             ans = 1;
//         else if (v[2] >= 2 && cnt > 2)
//             ans = 2;
//         else
//             ans = -1;
//     }
//     else
//     {
//         if (v[2] >= 1 && cnt > 1)
//             ans = 1;
//         else if (v[1] >= 2 && cnt > 2)
//             ans = 2;
//         else
//             ans = -1;
//     }

//     cout << ans << '\n';
//     return 0;
// }

const int INF = 1001001001;

int main()
{
    string s;
    cin >> s;

    vector<int> v(s.size());
    rep(i, s.size()) v[i] = (s[i] - '0');

    int ans = INF;

    for (int bit = 1; bit < (1 << s.size()); bit++)
    {
        int cnt = 0;
        int su = 0;
        rep(i, s.size())
        {
            if (bit & (1 << i))
            {
                cnt++;
                su += v[i];
            }
        }
        if (su % 3 == 0)
            ans = min(ans, (int)s.size() - cnt);
    }
    if (ans == INF)
        ans = -1;
    cout << ans << '\n';
    return 0;
}
