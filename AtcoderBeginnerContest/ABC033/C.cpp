#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);

int main()
{
    string s;
    cin >> s;

    int ans = 0, cur = 0;
    int n = s.size();
    bool ok = true;
    while (cur < n)
    {
        if (s[cur] == '0')
        {
            ok = false;
            cur++;
        }
        else if ('1' <= s[cur] && s[cur] <= '9' || s[cur] == '*')
            cur++;
        else
        {
            ans += ok;
            ok = true;
            cur++;
        }
    }
    cout << ans + ok << "\n";
    return 0;
}