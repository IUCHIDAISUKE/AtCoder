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

    double ans = 0;
    rep2(i, 1, n + 1)
    {
        double p = 1;
        int now = i;
        while (now < k)
            now <<= 1, p *= 0.5;
        ans += p / n;
    }
    printf("%.10f\n", ans);
    return 0;
}

// int main()
// {
//     int n, k;
//     cin >> n >> k;

//     double ans = 0;
//     rep2(i, 1, n + 1)
//     {
//         int tmp = i, div = 1;
//         while (tmp < k)
//             tmp <<= 1, div <<= 1;
//         ans += 1. / n / div;
//     }
//     printf("%.10f\n", ans);
//     return 0;
// }