#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

// bool ck(vector<int> v, int x)
// {
//     rep(i, v.size())
//     {
//         if (v[i] < x)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int n, m, x;
//     cin >> n >> m >> x;
//     vector<int> c(n);
//     vector<vector<int>> a(n, vector<int>(m));
//     rep(i, n)
//     {
//         cin >> c[i];
//         rep(j, m) cin >> a[i][j];
//     }

//     int ans = 1001001001;
//     for (int bit = 0; bit < (1 << n); bit++)
//     {
//         vector<int> getit(m, 0);
//         int res = 0;
//         rep(i, n)
//         {
//             if (bit & (1 << i))
//             {
//                 res += c[i];
//                 rep(j, m)
//                 {
//                     getit[j] += a[i][j];
//                 }
//             }
//         }
//         if (ck(getit, x))
//         {
//             ans = min(ans, res);
//         }
//     }

//     cout << ((ans == 1001001001) ? -1 : ans) << '\n';
//     return 0;
// }

int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> c(n);
    vector<vector<int>> v(n, vector<int>(m));
    rep(i, n)
    {
        cin >> c[i];
        rep(j, m) cin >> v[i][j];
    }

    int ans = 1001001001;
    for (int bit = 0; bit < (1 << n); bit++)
    {
        vector<int> ck(m, 0);
        int cost = 0;
        rep(i, n)
        {
            if (bit & (1 << i))
            {
                rep(j, m) ck[j] += v[i][j];
                cost += c[i];
            }
        }
        bool ok = true;
        rep(i, m) if (ck[i] < x) ok = false;
        if (ok)
            ans = min(ans, cost);
    }

    cout << (ans == 1001001001 ? -1 : ans) << '\n';

    return 0;
}
