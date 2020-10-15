#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> h(n), a(m), b(m), table(n + 1, 0);
//     rep(i, n) cin >> h[i];
//     rep(i, m) cin >> a[i] >> b[i];

//     int cnt = 0;
//     rep(i, m)
//     {
//         if (h[a[i] - 1] <= h[b[i] - 1])
//             table[a[i]]++;
//         if (h[b[i] - 1] <= h[a[i] - 1])
//             table[b[i]]++;
//     }
//     rep(i, n + 1) if (table[i]) cnt++;
//     cout << n - cnt << '\n';
//     return 0;
// }

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> h(n), a(m), b(m), table(n + 1, 0);
    rep(i, n) cin >> h[i];
    rep(i, m) cin >> a[i] >> b[i];

    int cnt = 0;
    rep(i, m)
    {
        table[a[i] - 1] = max(table[a[i] - 1], h[b[i] - 1]);
        table[b[i] - 1] = max(table[b[i] - 1], h[a[i] - 1]);
    }
    rep(i, n) cnt += h[i] > table[i];
    cout << cnt << '\n';
    return 0;
}
