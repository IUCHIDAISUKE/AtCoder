#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF_L = 1LL << 60;
const int INF_I = 1 << 30;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

int main()
{
    int t, n, m;
    cin >> t >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    cin >> m;
    vector<int> b(n);
    rep(i, m) cin >> b[i];

    int na = 0;
    bool good = true;
    rep(i, m)
    {
        bool ok = true;
        while (ok)
        {
            if (na > n)
            {
                good = false;
                break;
            }
            if (a[na] <= b[i] && b[i] <= a[na] + t)
                ok = false;
            na++;
        }
    }
    if (good)
        cout << "yes"
             << "\n";
    else
        cout << "no"
             << "\n";
    return 0;
}

// int main()
// {
//     int t, n, m;
//     cin >> t >> n;
//     vector<int> a(n);
//     rep(i, n) cin >> a[i];
//     cin >> m;
//     vector<int> b(m);
//     rep(i, m) cin >> b[i];

//     bool ok = true;
//     int na = 0, nb = 0;

//     while (nb < m)
//     {
//         if (a[na] <= b[nb] && b[nb] <= a[na] + t)
//         {
//             nb++;
//             na++;
//         }
//         else
//             na++;
//         if (na > n)
//             ok = false;
//     }
//     cout << (ok ? "yes" : "no") << "\n";
//     return 0;
// }
