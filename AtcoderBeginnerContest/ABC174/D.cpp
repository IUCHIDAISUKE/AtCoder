#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

using namespace std;
using ll = long long int;
using P = pair<int, int>;

const ll INF_L = 1LL << 60;
const int INF_I = 1 << 30;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int a = 0, b = 0;
    rep(i, n) if (s[i] == 'R') a++;
    int ans = max(a, b);
    rep(i, n)
    {
        if (s[i] == 'R')
            a--;
        else
            b++;
        int now = max(a, b);
        ans = min(ans, now);
    }

    cout << ans << "\n";
    return 0;
}

// int main()
// {
//     int n;
//     string s;
//     cin >> n >> s;

//     int cnt = 0, a = 0, b = 0;
//     rep(i, n) if (s[i] == 'R') cnt++;
//     string t = "";
//     rep(i, n)
//     {
//         if (i < cnt)
//             t += 'R';
//         else
//             t += 'W';
//     }
//     rep(i, n)
//     {
//         if (s[i] == 'R' && s[i] != t[i])
//             a++;
//         else if (s[i] == 'W' && s[i] != t[i])
//             b++;
//     }

//     cout << max(a, b) << "\n";
//     return 0;
// }
