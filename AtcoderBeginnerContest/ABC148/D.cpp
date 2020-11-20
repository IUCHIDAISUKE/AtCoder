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

    int idx = 1;
    rep(i, n)
    {
        if (a[i] == idx)
            idx++;
    }
    if (idx == 1)
        cout << -1 << '\n';
    else
        cout << n - (idx - 1) << '\n';
    return 0;
}
