#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
#define all2(a, b) (a).begin(), (a).begin() + (b)
#define debug(vari) cerr << #vari << " = " << (vari) << endl;

int main()
{
    int k, s;
    cin >> k >> s;

    int ans = 0;
    rep(x, k + 1)
    {
        rep(y, k + 1)
        {
            int z = s - x - y;
            if (0 <= z && z <= k)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
