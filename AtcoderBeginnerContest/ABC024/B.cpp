#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int ans = 0;
    int tmp = a[0];
    rep(i, n)
    {
        if (tmp <= a[i] && a[i] <= tmp + t)
        {
            ans += a[i] - tmp;
            tmp = a[i];
        }
        else
        {
            ans += t;
            tmp = a[i];
        }
    }

    cout << ans + t << '\n';
    return 0;
}
