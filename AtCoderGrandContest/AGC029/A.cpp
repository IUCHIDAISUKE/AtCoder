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
    string s;
    cin >> s;

    ll b = 0, a = 0, n = s.size();
    rep(i, n)
    {
        if (s[i] == 'B')
            b += i;
    }
    sort(all(s));
    reverse(all(s));
    rep(i, n)
    {
        if (s[i] == 'B')
            a += i;
    }

    cout << a - b << '\n';
    return 0;
}

// int main()
// {
//     string s;
//     cin >> s;

//     int b = 0, w = 0, n = s.size();
//     ll ans = 0;
//     rep(i, n)
//     {
//         b += s[i] == 'B';
//         w += s[i] == 'W';
//     }

//     if (w && b)
//     {
//         rep(i, n)
//         {
//             if (s[i] == 'B')
//             {
//                 ans += (n - b) - i;
//                 b--;
//             }
//         }
//     }
//     cout << ans << '\n';
//     return 0;
// }
