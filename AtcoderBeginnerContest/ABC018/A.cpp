#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    vector<int> abc(3), t;
    rep(i, 3) cin >> abc[i];
    t = abc;
    sort(all(t));
    reverse(all(t));

    rep(i, 3)
    {
        int ans;
        rep(j, 3)
        {
            if (abc[i] == t[j])
            {
                ans = j + 1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
