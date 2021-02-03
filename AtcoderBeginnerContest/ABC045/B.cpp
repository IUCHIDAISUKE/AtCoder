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
    vector<string> abc(3);
    rep(i, 3) cin >> abc[i];

    vector<int> n(3, -1);
    char ch = abc[0][0];
    n[0]++;
    while (1)
    {
        int tmp = ch - 'a';
        n[tmp]++;
        if (n[tmp] == abc[tmp].size())
        {
            cout << (char)('A' + tmp) << "\n";
            return 0;
        }
        ch = abc[tmp][n[tmp]];
    }
    return 0;
}