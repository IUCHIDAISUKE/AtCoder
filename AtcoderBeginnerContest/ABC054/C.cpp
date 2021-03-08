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
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> ma(n, vector<bool>(n, false));

    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        ma[a - 1][b - 1] = true, ma[b - 1][a - 1] = true;
    }

    vector<int> per(n);
    rep(i, n) per[i] = i;

    int ans = 0;
    do
    {
        if (per[0] != 0)
            continue;
        bool ok = true;
        rep(i, n - 1)
        {
            if (!ma[per[i]][per[i + 1]])
                ok = false;
        }
        if (ok)
            ans++;
    } while (next_permutation(all(per)));

    cout << ans << "\n";
    return 0;
}

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> a(m), b(m), per(n);
//     rep(i, m) cin >> a[i] >> b[i];
//     rep(i, n) per[i] = i + 1;

//     int ans = 0;
//     do
//     {
//         if (per[0] != 1)
//         {
//             continue;
//         }
//         bool all_path = true;
//         rep(i, n - 1)
//         {
//             bool ck = false;
//             rep(j, m)
//             {
//                 if ((per[i] == a[j] && per[i + 1] == b[j]) || (per[i + 1] == a[j] && per[i] == b[j]))
//                 {
//                     ck = true;
//                 }
//             }
//             if (!ck)
//             {
//                 all_path = false;
//             }
//         }
//         if (all_path)
//         {
//             ans++;
//         }
//     } while (next_permutation(all(per)));

//     cout << ans << '\n';
//     return 0;
// }
