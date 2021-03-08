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
    int n;
    cin >> n;
    vector<int> w(n);
    rep(i, n) cin >> w[i];

    vector<int> res;
    rep(i, n)
    {
        bool ok = true;
        rep(j, res.size())
        {
            if (res[j] >= w[i])
            {
                ok = false;
                res[j] = w[i];
                break;
            }
        }
        if (ok)
            res.push_back(w[i]);
    }
    cout << res.size() << "\n";
    return 0;
}

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n), b;
//     rep(i, n) cin >> v[i];

//     rep(i, n)
//     {
//         int index = -1;
//         rep(j, b.size())
//         {
//             if (b[j] >= v[i])
//             {
//                 index = j;
//                 break;
//             }
//         }
//         if (index < 0)
//             b.push_back(v[i]);
//         else
//             b[index] = v[i];
//     }

//     cout << b.size() << "\n";
//     return 0;
// }
