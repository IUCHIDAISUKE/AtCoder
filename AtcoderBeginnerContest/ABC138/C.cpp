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
    vector<int> v(n);
    rep(i, n) cin >> v[i];

    sort(all(v));
    double res = v[0];
    double ck = 1;
    rep(i, n - 1)
    {
        res += v[i + 1] * ck;
        ck *= 2;
    }
    printf("%.5lf\n", res / ck);
    // cout << res / ck << '\n';
    return 0;
}

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     rep(i, n) cin >> v[i];

//     sort(all(v));
//     double res = v[0];
//     rep(i, n - 1)
//         res = (v[i + 1] + res) / 2.0;
//     printf("%.5lf\n", res);
//     // cout << res / ck << '\n';
//     return 0;
// }
