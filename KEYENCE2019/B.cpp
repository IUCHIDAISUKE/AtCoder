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
    string s;
    cin >> s;

    int n = s.length();
    bool ok = false;
    rep(i, n + 1)
    {
        rep(j, i + 1)
        {
            string tmp = s.substr(0, j) + s.substr(i);
            if (tmp == "keyence")
                ok = true;
        }
    }
    cout << (ok ? "YES" : "NO") << '\n';
    return 0;
}

// int main()
// {
//     string s, t = "keyence";
//     cin >> s;

//     rep(i, 100)
//     {
//         if (s.size() - i != 7)
//             continue;
//         rep(j, s.size())
//         {
//             string tmp = s;
//             tmp.erase(j, i);
//             if (tmp == t)
//             {
//                 cout << "YES" << '\n';
//                 return 0;
//             }
//         }
//     }

//     cout << "NO" << '\n';
//     return 0;
// }