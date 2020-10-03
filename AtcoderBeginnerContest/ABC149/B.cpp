#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    ll a, b, k;
    cin >> a >> b >> k;

    ll tmp = max(a - k, 0LL);
    k = max(k - a, 0LL);
    b = max(b - k, 0LL);

    cout << tmp << ' ' << b << '\n';
    return 0;
}
