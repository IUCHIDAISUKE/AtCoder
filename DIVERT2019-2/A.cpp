#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

// int main()
// {
//     int n, k;
//     cin >> n >> k;

//     cout << n % k << '\n';
//     return 0;
// }

int main()
{
    int n, k;
    cin >> n >> k;
    if (k == 1)
        cout << 0 << '\n';
    else
        cout << n - k << '\n';

    return 0;
}
