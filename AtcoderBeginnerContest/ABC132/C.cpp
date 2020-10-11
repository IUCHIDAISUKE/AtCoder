#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<int> d(n);
    rep(i, n) cin >> d[i];

    sort(all(d));
    cout << d[n / 2] - d[n / 2 - 1] << '\n';
    return 0;
}
