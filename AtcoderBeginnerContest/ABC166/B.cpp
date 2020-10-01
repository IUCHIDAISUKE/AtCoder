#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n + 1, 0);
    rep(i, k)
    {
        int d;
        cin >> d;
        rep(j, d)
        {
            int x;
            cin >> x;
            a[x]++;
        }
    }

    int ans = 0;

    rep2(i, 1, n + 1)
    {
        if (a[i] == 0)
        {
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}
