#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

// int main()
// {
//     string a;
//     cin >> a;

//     string res;
//     res.push_back(a[0]);
//     cout << a[0];
//     int cnt = 0;
//     rep(i, a.size())
//     {
//         if (res.back() != a[i])
//         {
//             cout << cnt;
//             res.push_back(a[i]);
//             cout << a[i];

//             cnt = 1;
//         }
//         else
//         {
//             cnt++;
//         }
//     }

//     cout << cnt << '\n';
//     return 0;
// }

int main()
{
    string a;
    cin >> a;

    string res = "";
    int cnt = 0;
    rep(i, a.size())
    {
        cnt++;
        if (a[i] != a[i + 1] || i == a.size() - 1)
        {
            res += a[i];
            res += to_string(cnt);
            cnt = 0;
        }
    }

    cout << res << '\n';
    return 0;
}
