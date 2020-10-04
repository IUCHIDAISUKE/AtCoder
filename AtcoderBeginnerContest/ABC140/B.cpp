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

    vector<int> a(n), b(n), c(n - 1);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n - 1) cin >> c[i];

    int ans = 0;
    int tmp = 1001001001;
    rep(i, n)
    {
        ans += b[a[i] - 1];
        if (a[i] - tmp == 1)
        {
            ans += c[tmp - 1];
        }
        tmp = a[i];
    }
    cout << ans << '\n';
    return 0;
}
