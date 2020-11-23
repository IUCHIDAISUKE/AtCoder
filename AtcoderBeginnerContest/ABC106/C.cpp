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
    string s;
    ll k;
    cin >> s >> k;

    int idx;
    rep(i, s.size())
    {
        if (s[i] != '1')
        {
            idx = i;
            break;
        }
    }
    cout << ((idx <= (k - 1)) ? s[idx] : s[k - 1]) << '\n';
    return 0;
}
