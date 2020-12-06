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
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    ll ans = 0, right = 0;
    ll sum = 0, tmp = 0;
    for (int left = 0; left < n; left++)
    {
        while (right < n && ((tmp ^ a[right]) == (sum + a[right])))
        {
            tmp ^= a[right];
            sum += a[right];
            right++;
        }
        ans += (right - left);
        if (right == left)
            right++;
        else
        {
            tmp ^= a[left];
            sum -= a[left];
        }
    }

    cout << ans << '\n';
    return 0;
}
