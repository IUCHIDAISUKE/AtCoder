#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    vector<vector<char>> a(4, vector<char>(4));
    rep(i, 4) rep(j, 4) cin >> a[i][j];
    rep(i, 4) reverse(all(a[i]));

    rep(i, 4)
    {
        rep(j, 4)
        {
            if (j)
            {
                cout << ' ';
            }
            cout << a[3 - i][j];
        }
        cout << '\n';
    }
    return 0;
}
