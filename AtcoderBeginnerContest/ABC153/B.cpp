#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int h, n;
    cin >> h >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int s = 0;
    rep(i, n) s += a[i];

    cout << (s >= h ? "Yes" : "No") << '\n';
    return 0;
}
