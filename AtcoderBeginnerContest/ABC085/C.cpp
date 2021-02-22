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
    int n, y;
    cin >> n >> y;

    rep(i, 2000 + 1)
    {
        rep(j, 2000 + 1)
        {
            int k = n - i - j;
            if (k < 0)
                continue;
            if (i * 10000 + j * 5000 + k * 1000 == y)
            {
                printf("%d %d %d\n", i, j, k);
                return 0;
            }
        }
    }
    printf("-1 -1 -1\n");
    return 0;
}

// int main()
// {
//     int n, y;
//     cin >> n >> y;

//     int a, b, c;
//     int num10000 = y / 10000, num5000 = y / 5000;
//     rep(i, num10000 + 1)
//     {
//         rep(j, num5000 + 1)
//         {
//             int num = y / 1000 - 10 * i - 5 * j;
//             if (0 <= num && num <= y / 1000 && i + j + num == n)
//             {
//                 printf("%d %d %d\n", i, j, num);
//                 return 0;
//             }
//         }
//     }

//     printf("-1 -1 -1\n");
//     return 0;
// }
