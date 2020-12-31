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
    vector<int> e(6), l(6);
    int b;
    rep(i, 6) cin >> e[i];
    cin >> b;
    rep(i, 6) cin >> l[i];

    int cnt = 0;
    rep(i, 6)
    {
        rep(j, 6) if (l[i] == e[j]) cnt++;
    }

    if (cnt == 5)
    {
        bool ok = false;
        rep(i, 6)
        {
            if (l[i] == b)
                ok = true;
        }
        if (ok)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    else if (cnt == 6)
        cout << 1 << endl;
    else if (cnt == 4)
        cout << 4 << endl;
    else if (cnt == 3)
        cout << 5 << endl;
    else
        cout << 0 << endl;
    return 0;
}
