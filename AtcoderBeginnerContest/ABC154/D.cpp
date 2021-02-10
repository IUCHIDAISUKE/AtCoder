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
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    rep(i, n) cin >> p[i];

    int st, tmp = 0;
    vector<int> cum(n + 1, 0);
    rep(i, n) cum[i + 1] = (p[i] + 1) + cum[i];
    rep(i, n - k + 1)
    {
        int s = cum[i + k] - cum[i];
        if (s >= tmp)
        {
            st = i;
            tmp = s;
        }
    }

    printf("%.10f\n", (cum[st + k] - cum[st]) / 2.0);
    return 0;
}

// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> p(n);
//     rep(i, n) cin >> p[i];

//     int st, tmp = 0;
//     vector<int> cum(n + 1, 0);
//     rep(i, n) cum[i + 1] = p[i] + cum[i];
//     rep(i, n - k + 1)
//     {
//         int s = cum[i + k] - cum[i];
//         if (s >= tmp)
//         {
//             st = i;
//             tmp = s;
//         }
//     }
//     double ans = 0;
//     for (int i = st; i < k + st; i++)
//     {
//         double s = 1. * (p[i] + 1) * p[i] / 2.0;
//         ans += s / p[i];
//     }

//     printf("%.10f\n", ans);
//     return 0;
// }