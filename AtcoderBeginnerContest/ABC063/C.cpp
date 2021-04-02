#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

using namespace std;
using ll = long long int;
using P = pair<int, int>;

const ll INF_L = 1LL << 60;
const int INF_I = 1 << 30;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

int main()
{
    int n;
    cin >> n;
    vector<int> s(n);
    rep(i, n) cin >> s[i];

    sort(all(s));
    int ans = 0;
    rep(i, n) ans += s[i];

    if (ans % 10 != 0)
        cout << ans << "\n";
    else
    {
        rep(i, n)
        {
            if (s[i] % 10)
            {
                ans -= s[i];
                cout << ans << "\n";
                return 0;
            }
        }
        cout << 0 << "\n";
    }
    return 0;
}
