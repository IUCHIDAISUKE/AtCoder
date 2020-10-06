#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{

    ll n, k;
    cin >> n >> k;

    n = n % k;
    if (n >= abs(n - k))
    {
        n = abs(n - k);
    }
    cout << n << '\n';
    return 0;
}
