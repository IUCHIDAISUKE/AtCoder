#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int tmp = 1;
    rep(i, n)
    {
        if (a[i] & 1)
            tmp *= 1;
        else
            tmp *= 2;
    }
    int ans = 1;
    rep(i, n) ans *= 3;
    cout << ans - tmp << '\n';
    return 0;
}
