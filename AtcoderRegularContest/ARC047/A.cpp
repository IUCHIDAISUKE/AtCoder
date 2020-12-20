#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int MOD = (int)1e9 + 7;

int main()
{
    int n, l;
    string s;
    cin >> n >> l >> s;

    int ans = 0;
    int cnt = 1;
    rep(i, n)
    {
        if (s[i] == '+')
            cnt++;
        else
            cnt--;
        if (cnt > l)
        {
            ans++;
            cnt = 1;
        }
    }
    cout << ans << '\n';
    return 0;
}
