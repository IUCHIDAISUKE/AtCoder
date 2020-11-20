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
    int h, w;
    cin >> h >> w;
    vector<vector<string>> v(h, vector<string>(w));
    rep(i, h) rep(j, w) cin >> v[i][j];

    rep(i, h) rep(j, w)
    {
        if (v[i][j] == "snuke")
        {
            cout << (char)(j + 'A') << i + 1 << '\n';
            return 0;
        }
    }
    return 0;
}
