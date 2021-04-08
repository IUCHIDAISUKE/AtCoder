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
    vector<ll> p(n);
    rep(i, n) cin >> p[i];

    int ans = 0;
    rep(i, n)
    {
        if (p[i] == i + 1)
        {
            if (i != n - 1)
                swap(p[i], p[i + 1]);
            else
                swap(p[i - 1], p[i]);
            ans++;
        }
    }

    cout << ans << "\n";
    return 0;
}
