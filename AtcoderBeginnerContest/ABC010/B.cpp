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
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int ans = 0;
    rep(i, n)
    {
        while (a[i] % 3 == 2 || a[i] % 2 == 0)
        {
            ans++;
            a[i]--;
        }
    }

    cout << ans << '\n';
    return 0;
}
