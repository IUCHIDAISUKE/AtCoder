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
    string s, t = "ACGT";
    cin >> s;

    int ans = 0, tmp = 0;
    rep(i, s.size())
    {
        bool ck = false;
        rep(j, 4) if (s[i] == t[j]) ck = true;
        if (ck)
        {
            tmp++;
            ans = max(ans, tmp);
        }
        else
            tmp = 0;
    }
    cout << ans << '\n';
    return 0;
}
