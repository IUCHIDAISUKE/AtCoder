#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int cnt = 0;
    int s = 0;
    rep(i, n) s += a[i];

    int tmp = (s + 4 * m - 1) / 4 / m;
    rep(i, n)
    {
        if (a[i] >= tmp)
        {
            cnt++;
        }
    }

    cout << (cnt >= m ? "Yes" : "No") << '\n';
    return 0;
}
