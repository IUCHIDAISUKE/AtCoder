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
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<ll> cum(n + 1, 0);
    rep(i, n) cum[i + 1] = a[i] + cum[i];
    rep(i, n)
    {
        int k = i + 1;
        ll ans = 0;
        rep(j, n) if (j + k < n + 1) ans = max(ans, cum[j + k] - cum[j]);
        cout << ans << "\n";
    }
    return 0;
}

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     rep(i, n) cin >> a[i];

//     vector<ll> res(n, 0);
//     rep(i, n)
//     {
//         ll tmp = 0;
//         for (int j = i; j < n; j++)
//         {
//             tmp += a[j];
//             res[j - i] = max(tmp, res[j - i]);
//         }
//     }
//     rep(i, n)
//             cout
//         << res[i] << "\n";
//     return 0;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<ll> a(n);
//     rep(i, n) cin >> a[i];
//     vector<ll> cum(n + 1, 0);
//     rep(i, n) cum[i + 1] = cum[i] + a[i];

//     rep(k, n)
//     {
//         ll tmp = 0;
//         rep(i, n - k)
//             tmp = max(tmp, cum[i + k + 1] - cum[i]);
//         cout << tmp << '\n';
//     }

//     return 0;
// }
