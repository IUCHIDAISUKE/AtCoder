#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;

int main()
{
    int n;
    string s, t;
    cin >> n >> s >> t;

    rep(i, n + 1)
    {
        if (s.substr(i) == t.substr(0, n - i))
        {
            cout << n + i << '\n';
            return 0;
        }
    }
}
// int main()
// {
//     int n;
//     string s, t;
//     cin >> n >> s >> t;

//     rep2(i, n, 2 * n + 1)
//     {
//         bool ok = true;
//         rep(j, 2 * n - i)
//         {
//             if (s[j + (i - n)] != t[j])
//                 ok = false;
//         }
//         if (ok)
//         {
//             cout << i << '\n';
//             break;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int n;
//     string s, t;
//     cin >> n >> s >> t;

//     int cnt = 0;
//     rep(i, n)
//     {
//         if (s[i] == t[cnt])
//             cnt++;
//         else
//         {
//             cnt = 0;
//             if (s[i] == t[cnt])
//                 cnt++;
//         }
//     }

//     cout << 2 * n - cnt << '\n';
//     return 0;
// }
