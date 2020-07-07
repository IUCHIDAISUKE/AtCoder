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

    sort(all(a));
    reverse(all(a));

    int ans = 0;
    rep(i, n)
    {
        ans += (i & 1) ? -a[i] : a[i]; // (i & 1) -> check odd !
    }

    cout << ans << endl;
    return 0;
}
