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

    int r = 0, g = 0, b = 0;
    rep(i, n)
    {
        if (s[i] == 'R')
            r++;
        if (s[i] == 'G')
            g++;
        if (s[i] == 'B')
            b++;
    }
    int tmp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int k = 2 * j - i;
            if (k >= n)
                continue;
            if (s[i] != s[j] && s[j] != s[k] && s[k] != s[i])
                tmp++;
        }
    }

    cout << (ll)r * g * b - tmp << "\n";
    return 0;
}
