#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

const int MOD = 1e9 + 7;

int main()
{
    int n, x;
    cin >> n >> x;

    cout << min(x - 1, n - x) << '\n';
    return 0;
}
