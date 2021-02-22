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
    int a, b;
    rep(i, 3)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (!i)
            a = abs(x - y), b = abs(y - z);
        if (a != abs(x - y) || b != abs(y - z))
        {
            cout << "No"
                 << "\n";
            return 0;
        }
    }
    cout << "Yes"
         << "\n";
    return 0;
}

// int main()
// {
//     vector<vector<int>> c(3, vector<int>(3));
//     rep(i, 3) rep(j, 3) cin >> c[i][j];

//     rep(a1, 100 + 1)
//     {
//         int b1 = c[0][0] - a1, b2 = c[0][1] - a1, b3 = c[0][2] - a1;
//         int a2 = c[1][0] - b1, a3 = c[2][0] - b1;
//         bool ok = true;
//         if (a2 + b2 != c[1][1])
//             ok = false;
//         if (a2 + b3 != c[1][2])
//             ok = false;
//         if (a3 + b2 != c[2][1])
//             ok = false;
//         if (a3 + b3 != c[2][2])
//             ok = false;
//         if (ok)
//         {
//             cout << "Yes"
//                  << "\n";
//             return 0;
//         }
//     }
//     cout << "No"
//          << "\n";
//     return 0;
// }