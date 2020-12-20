#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int MOD = (int)1e9 + 7;

int n, weight;

int main()
{
    string s;
    vector<int> v(4);
    cin >> s >> v[0] >> v[1] >> v[2] >> v[3];

    rep(i, s.size())
    {
        rep(j, 4)
        {
            if (i == v[j])
                cout << '"';
        }
        cout << s[i];
    }
    if (v[3] == s.size())
        cout << '"';
    cout << '\n';
    return 0;
}
