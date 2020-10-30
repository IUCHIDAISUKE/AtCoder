#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int MOD = 1000000007;

int main()
{
    vector<int> ck(4);
    rep(i, 4) cin >> ck[i];

    int s = 0;
    rep(i, 4) s += ck[i];
    for (int i = 0; i < (1 << 4); i++)
    {
        int tmp = 0;
        rep(j, 4)
        {
            if (i & (1 << j))
            {
                tmp += ck[j];
            }
        }
        if (tmp * 2 == s)
        {
            cout << "Yes" << '\n';
            return 0;
        }
    }
    cout << "No" << '\n';
    return 0;
}
