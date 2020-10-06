#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int gcd(int a, int b)
{
    return (b ? gcd(b, a % b) : a);
}

int main()
{

    int k;
    cin >> k;

    int ans = 0;
    rep2(i, 1, k + 1)
    {
        rep2(j, 1, k + 1)
        {
            rep2(l, 1, k + 1)
            {
                int t = gcd(i, j);
                ans += gcd(t, l);
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
