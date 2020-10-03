#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n, k, m;
    cin >> n >> k >> m;
    vector<int> a(n - 1);
    rep(i, n - 1) cin >> a[i];

    int s = 0;
    rep(i, n - 1) s += a[i];

    int ans = max(0, m * n - s);

    cout << (ans <= k ? ans : -1) << '\n';
    return 0;
}
