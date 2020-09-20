#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{

    int l, h, n;
    cin >> l >> h >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    rep(i, n)
    {
        if (a[i] < l)
        {
            cout << l - a[i] << '\n';
        }
        else if (h < a[i])
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
    }

    return 0;
}
