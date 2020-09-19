#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> l(q), r(q), t(q), res(n, 0);
    rep(i, q) cin >> l[i] >> r[i] >> t[i];
    rep(i, q)
    {
        for (int j = l[i] - 1; j < r[i]; j++)
        {
            res[j] = t[i];
        }
    }

    rep(i, n)
    {
        cout << res[i] << '\n';
    }
    return 0;
}
