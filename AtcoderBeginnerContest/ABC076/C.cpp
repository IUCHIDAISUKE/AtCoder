#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF_L = 1LL << 60;
const int INF_I = 1 << 30;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

string s, t;
bool match(int k)
{
    rep(i, t.size())
    {
        if (s[i + k] != t[i] && s[i + k] != '?')
            return (false);
    }
    return (true);
}

string con(int k)
{
    string ans = s;
    rep(i, s.size())
    {
        if (k <= i && i < k + t.size())
            ans[i] = t[i - k];
        else
        {
            if (ans[i] == '?')
                ans[i] = 'a';
        }
    }
    return (ans);
}

int main()
{
    cin >> s >> t;

    string ans = "";
    rep(i, s.size())
    {
        bool ok = match(i);
        if (ok)
            ans = con(i);
    }

    if (ans == "")
    {
        cout << "UNRESTORABLE"
             << "\n";
    }
    else
    {
        cout << ans << "\n";
    }
    return 0;
}
