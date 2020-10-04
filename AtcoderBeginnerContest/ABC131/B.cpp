#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n, l;
    cin >> n >> l;

    int res = 1001001001;
    int s = 0, ans;
    rep(i, n) s += l + i;
    rep(i, n)
    {
        int tmp = 0;
        rep(j, n)
        {
            if (i != j)
            {
                tmp += l + j;
            }
        }
        if (abs(tmp - s) < res)
        {
            res = abs(tmp - s);
            ans = tmp;
        }
    }
    cout << ans << '\n';
    return 0;
}
