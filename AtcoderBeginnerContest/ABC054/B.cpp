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
    int n, m;
    cin >> n >> m;
    vector<string> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];

    rep(i, n)
    {
        rep(j, n)
        {
            bool ok = true;
            rep(k, m)
            {
                if (i + k < n)
                {
                    if (a[i + k].substr(j, m) != b[k])
                        ok = false;
                }
                else
                    ok = false;
            }
            if (ok)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}