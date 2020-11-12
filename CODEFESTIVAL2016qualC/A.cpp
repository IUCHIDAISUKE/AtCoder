#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;

// int main()
// {
//     string s;
//     cin >> s;

//     int ok1 = -1, ok2 = -1;
//     rep(i, s.size())
//     {
//         if (s[i] == 'C')
//         {
//             ok1 = i;
//             break;
//         }
//     }
//     for (int i = s.size() - 1; i >= 0; i--)
//     {
//         if (s[i] == 'F')
//         {
//             ok2 = i;
//             break;
//         }
//     }
//     if (ok1 == -1 || ok2 == -1)
//         cout << "No" << '\n';
//     else
//         cout << ((ok1 < ok2) ? "Yes" : "No") << '\n';
//     return 0;
// }

int main()
{
    string s;
    cin >> s;

    int ok1 = -1, ok2 = -1;
    rep(i, s.size())
    {
        rep(j, i)
        {
            if (s[j] == 'C' && s[i] == 'F')
            {
                cout << "Yes" << '\n';
                return 0;
            }
        }
    }
    cout << "No" << '\n';
    return 0;
}
