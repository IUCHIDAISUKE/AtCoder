#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    vector<int> n(4);
    rep(i, 4) cin >> n[i];

    sort(all(n));

    cout << ((n[0] == 1 && n[1] == 4 && n[2] == 7 && n[3] == 9) ? "YES" : "NO") << '\n';

    return 0;
}
