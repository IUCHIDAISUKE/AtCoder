#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

// int main()
// {
//     int a, b, c, k;
//     cin >> a >> b >> c >> k;

//     while (b <= a && k)
//     {
//         k--;
//         b <<= 1;
//     }

//     while (c <= b && k)
//     {
//         k--;
//         c <<= 1;
//     }

//     cout << ((a < b && b < c) ? "Yes" : "No") << '\n';
//     return (0);
// }

int main()
{
    int r, g, b, k;
    cin >> r >> g >> b >> k;

    while (r >= g)
    {
        g *= 2;
        k--;
    }
    while (g >= b)
    {
        b *= 2;
        k--;
    }
    cout << ((k < 0) ? "No" : "Yes") << '\n';
    return 0;
}
