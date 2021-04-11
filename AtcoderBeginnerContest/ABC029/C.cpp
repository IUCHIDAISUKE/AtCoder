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

int n;

void dfs(string s)
{
    if (s.size() == n + 1)
        cout << s.substr(1) << "\n";
    else
    {
        char c = 'a';
        while (c < 'd')
        {
            string t = s;
            t += c;
            dfs(t);
            c++;
        }
    }
}

int main()
{
    cin >> n;

    dfs("a");
    return 0;
}

// int n;

// void dfs(string s)
// {
//     if (s.size() == n)
//     {
//         cout << s << "\n";
//         return;
//     }
//     for (char c = 'a'; c < 'd'; c++)
//     {
//         string t = s;
//         t += c;
//         dfs(t);
//     }
// }

// int main()
// {
//     cin >> n;
//     dfs("");
//     return 0;
// }