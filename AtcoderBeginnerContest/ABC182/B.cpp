#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    P ans(-1, 0);
    rep2(k, 2, 1000 + 1)
    {
        int cnt = 0;
        rep(j, n)
        {
            if (a[j] % k == 0)
                cnt++;
        }
        ans = max(ans, P(cnt, k));
    }
    cout << ans.second << '\n';
    return 0;
}
