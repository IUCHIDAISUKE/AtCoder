#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(q), ans(n, 0);
    rep(i, q) cin >> a[i];

    rep(i, q) ans[a[i] - 1]++;

    rep(i, n)
    {
        if ((q - ans[i]) < k)
        {
            cout << "Yes" << '\n';
        }
        else
        {
            cout << "No" << '\n';
        }
    }
    return 0;
}
