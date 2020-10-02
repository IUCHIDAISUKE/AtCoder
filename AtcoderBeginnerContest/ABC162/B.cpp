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

    ll res = 0;
    rep(i, n + 1)
    {
        if (i % 3 && i % 5)
        {
            res += i;
        }
    };

    cout << res << '\n';
    return 0;
}
