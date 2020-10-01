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
        rep2(j, i + 1, n)
        {
            rep2(k, j + 1, n)
            {
                if (a[i] == a[j] || a[j] == a[k] || a[k] == a[i])
                {
                    continue;
                }
                int ma = max({a[i], a[j], a[k]});

                if (ma < a[i] + a[j] + a[k] - ma)
                {
                    ans++;
                }
            }
        }
    }

    cout << ans << '\n';
    return 0;
}
