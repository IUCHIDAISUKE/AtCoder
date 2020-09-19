#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

const int MOD = 1e9 + 7;

int main()
{
    int n;
    cin >> n;

    int res = 0;
    for (; res * res * res * res <= n; res++)
    {
    }
    res--;

    cout << res << '\n';
    return 0;
}
