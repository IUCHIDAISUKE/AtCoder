#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{

    int n, m;
    cin >> n >> m;

    cout << n * (n - 1) / 2 + m * (m - 1) / 2 << '\n';
    return 0;
}
