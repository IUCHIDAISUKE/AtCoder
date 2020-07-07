#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
#define all2(a, b) (a).begin(), (a).begin() + (b)
#define debug(vari) cerr << #vari << " = " << (vari) << endl;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int ans = 1001001001;
    rep(i, n)
    {
        int cnt = 0;
        int tmp = a[i];
        while (tmp % 2 == 0)
        {
            cnt++;
            tmp /= 2;
        }
        ans = min(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}
