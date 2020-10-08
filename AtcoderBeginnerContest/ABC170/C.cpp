// #include <bits/stdc++.h>

// using namespace std;
// typedef long long ll;

// #define rep(i, n) for (int i = 0; i < (n); i++)
// #define rep2(i, a, b) for (int i = (a); i < (b); ++i)
// #define all(a) (a).begin(), (a).end()

// const int MOD = (int)1e9;

// int main()
// {
//     int x, n;
//     cin >> x >> n;
//     vector<int> p(n);
//     rep(i, n) cin >> p[i];

//     sort(all(p));

//     int ans;
//     int tmp = 1001001001;
//     rep(i, 100 + 2)
//     {
//         bool flag = true;
//         rep(j, n)
//         {
//             if (i == p[j])
//                 flag = false;
//         }
//         if (flag)
//         {
//             if (tmp > abs(x - i))
//             {
//                 tmp = abs(x - i);
//                 ans = i;
//             }
//         }
//     }
//     cout << ans << '\n';
//     return 0;
// }

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int x, n;
    cin >> x >> n;
    vector<int> d(102);
    rep(i, n)
    {
        int p;
        cin >> p;
        d[p] = 1;
    }

    P ans(1001001001, -1);
    rep(i, 100 + 2)
    {
        if (d[i])
            continue;
        int dif = abs(x - i);
        ans = min(ans, P(dif, i));
    }
    cout << ans.second << '\n';
    return 0;
}
