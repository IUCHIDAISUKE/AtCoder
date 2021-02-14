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
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int l = s.size();
        bool ok = false;
        rep(i, l)
        {
            rep2(j, i + 4, l)
            {
                if (s.substr(i, 4) == "okyo" && s.substr(j, 3) == "ech")
                    ok = true;
            }
        }
        cout << (ok ? "Yes" : "No") << "\n";
    }

    return 0;
}