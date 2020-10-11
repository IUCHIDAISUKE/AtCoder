#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i, n) cin >> h[i];

    int ans = 0;
    int i = 0, tmp = 0;
    while (i < n - 1)
    {
        if (h[i] >= h[i + 1])
        {
            tmp++;
            i++;
            ans = max(ans, tmp);
        }
        else
        {
            tmp = 0;
            i++;
        }
    }
    cout << ans << '\n';
    return 0;
}

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> h(n);
//     rep(i, n) cin >> h[i];

//     reverse(all(h));
//     int ans = 0;
//     int val = 0, tmp = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (h[i - 1] <= h[i])
//             val++;
//         else
//             val = 0;
//         ans = max(ans, val);
//     }
//     cout << ans << '\n';
//     return 0;
// }
