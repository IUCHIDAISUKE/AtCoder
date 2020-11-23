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
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i, n) cin >> h[i];

    int pre = -999;
    string ans = "Yes";
    rep(i, n)
    {
        if (pre <= h[i] - 1)
            pre = h[i] - 1;
        else if (pre <= h[i])
            pre = h[i];
        else
            ans = "No";
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

//     string ans = "Yes";
//     for (int i = n - 2; i >= 0; i--)
//     {
//         if (h[i] > h[i + 1] + 1)
//             ans = "No";
//         else if (h[i] == h[i + 1] + 1)
//             h[i]--;
//     }
//     cout << ans << '\n';
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> h(n);
//     rep(i, n) cin >> h[i];

//     int tmp = h[0] - 1;
//     string ans = "Yes";
//     rep2(i, 1, n)
//     {
//         if (h[i] < tmp)
//             ans = "No";
//         if (tmp + 1 < h[i])
//             tmp = max(tmp, h[i] - 1);
//     }
//     cout << ans << '\n';
//     return 0;
// }
