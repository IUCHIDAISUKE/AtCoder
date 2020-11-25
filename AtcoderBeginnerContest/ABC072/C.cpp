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

    vector<int> dis((int)1e5 + 10, 0);
    rep(i, n) dis[a[i]]++;

    int ans = 0;
    int s = dis.size();
    rep(i, s - 2)
    {
        int cnt = dis[i] + dis[i + 1] + dis[i + 2];
        ans = max(ans, cnt);
    }

    cout << ans << '\n';
    return 0;
}
