#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int r, d, x;
    cin >> r >> d >> x;

    rep(i, 10)
    {
        x = r * x - d;
        cout << x << '\n';
    }
    return 0;
}
