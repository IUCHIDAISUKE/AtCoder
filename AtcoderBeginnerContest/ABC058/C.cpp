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

    vector<int> res(26, 0);
    rep(i, n)
    {
        string s;
        cin >> s;
        if (i == 0)
        {
            rep(j, s.size())
                res[s[j] - 'a']++;
        }
        vector<int> tmp(26, 0);
        rep(j, s.size())
            tmp[s[j] - 'a']++;
        rep(j, 26)
            res[j] = min(res[j], tmp[j]);
    }
    string ans = "";
    rep(i, 26)
    {
        char c = i + 'a';
        rep(j, res[i])
            ans += c;
    }

    cout << ans << "\n";
    return 0;
}
