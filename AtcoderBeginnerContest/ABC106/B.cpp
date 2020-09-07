#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; i += 2)
    {
        int cnt = 0;
        rep2(j, 1, n + 1)
        {
            if (i % j == 0)
            {
                cnt++;
            }
        }
        if (cnt == 8)
        {
            ans++;
        }
    }

    cout << ans << endl;
    return (0);
}
