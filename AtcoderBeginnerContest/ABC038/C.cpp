#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int N_MAX = (int)1e5 + 10;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    ll ans = 0;
    int right = 0;
    for (int left = 0; left < n; left++)
    {
        while (right < n - 1 && a[right] < a[right + 1] && left <= right)
            right++;
        ans += right - left + 1;
        if (left == right)
            right++;
    }
    cout << ans << '\n';
    return 0;
}
