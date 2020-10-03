#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n;
    cin >> n;
    vector<int> d(n);
    rep(i, n) cin >> d[i];

    int s = 0;
    rep(i, n) s += d[i];
    s *= s;
    rep(i, n) s -= d[i] * d[i];
    cout << s / 2 << '\n';
    return 0;
}
