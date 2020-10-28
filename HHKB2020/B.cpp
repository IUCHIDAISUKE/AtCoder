#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];

    int sum = 0;
    rep(i, h)
    {
        rep(j, w)
        {
            if (j + 1 < w && s[i][j] == '.' && s[i][j + 1] == '.')
                sum++;
            if (i + 1 < h && s[i][j] == '.' && s[i + 1][j] == '.')
                sum++;
        }
    }
    cout << sum << '\n';
    return 0;
}
