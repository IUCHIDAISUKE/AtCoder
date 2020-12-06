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
    int n, k;
    cin >> n >> k;
    vector<int> s(n);
    rep(i, n) cin >> s[i];

    int ans = 0;
    int right = 0;
    ll tmp = 1;
    for (int left = 0; left < n; left++)
    {
        if (s[left] == 0)
        {
            ans = n;
            break;
        }
        while (right < n && tmp * s[right] <= (ll)k)
        {
            tmp *= s[right];
            right++;
        }
        ans = max(ans, right - left);
        if (left == right)
            right++;
        else
            tmp /= s[left];
    }
    cout << ans << '\n';
    return 0;
}
