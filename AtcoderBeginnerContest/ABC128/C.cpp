#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

using namespace std;
using ll = int64_t;
using P = pair<int, int>;

const ll INF_L = 1LL << 60;
const int INF_I = 1 << 30;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> s(m);
    vector<int> p(m);
    rep(i, m)
    {
        int k;
        cin >> k;
        s[i].resize(k);
        rep(j, k) cin >> s[i][j];
    }
    rep(i, m) cin >> p[i];

    int ans = 0;
    for (int bit = 0; bit < (1 << n); bit++)
    {
        bool ok = true;
        rep(i, m)
        {
            int cnt = 0;
            rep(j, s[i].size()) if (bit & (1 << (s[i][j] - 1))) cnt++;
            if (cnt % 2 != p[i])
                ok = false;
        }
        if (ok)
            ans++;
    }

    cout << ans << "\n";
    return 0;
}

// int main()
// {
//     int n, m;
//     cin >> n >> m;

//     vector<vector<int>> s(m);
//     rep(i, m)
//     {
//         int k;
//         cin >> k;
//         s[i].resize(k);
//         rep(j, k) cin >> s[i][j];
//     }
//     vector<int> p(m);
//     rep(i, m) cin >> p[i];

//     int ans = 0;
//     for (int bit = 0; bit < (1 << n); bit++)
//     {
//         bool all = true;
//         rep(i, m)
//         {
//             int cnt = 0;
//             rep(j, s[i].size())
//             {
//                 if (bit & (1 << (s[i][j] - 1)))
//                 {
//                     cnt++;
//                 }
//             }
//             if (cnt % 2 != p[i])
//                 all = false;
//         }
//         if (all)
//             ans++;
//     }

//     cout << ans << '\n';
//     return 0;
// }
