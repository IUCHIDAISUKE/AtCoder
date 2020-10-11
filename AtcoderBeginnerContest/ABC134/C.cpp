#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i];

    b = a;
    sort(all(b));
    int first = b[n - 1];
    int second = b[n - 2];

    rep(i, n)
    {
        if (a[i] == first)
            cout << second << '\n';
        else
            cout << first << '\n';
    }
    return 0;
}

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> d(n), l(n, 0), r(n, 0);
//     rep(i, n) cin >> d[i];
//     l[0] = d[0];
//     r[n - 1] = d[n - 1];
//     rep2(i, 1, n) l[i] = max(l[i - 1], d[i]);
//     for (int i = n - 2; i >= 0; i--)
//         r[i] = max(r[i + 1], d[i]);
//     rep(i, n)
//     {
//         if (i == 0)
//             cout << r[1] << '\n';
//         else if (i == n - 1)
//             cout << l[n - 2] << '\n';
//         else
//             cout << max(r[i + 1], l[i - 1]) << '\n';
//     }
//     return 0;
// }
