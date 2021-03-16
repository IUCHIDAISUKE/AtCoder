#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

using namespace std;
using ll = int64_t;
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

    vector<int> dis(3, 0);
    rep(i, n)
    {
        if (a[i] % 4 == 0)
            dis[2]++;
        else if (a[i] % 2 == 0)
            dis[1]++;
        else
            dis[0]++;
    }

    bool ok = true;
    if (!dis[1])
    {
        if (dis[0] > dis[2] + 1)
            ok = false;
    }
    else
    {
        if (dis[0] > dis[2])
            ok = false;
    }

    cout << (ok ? "Yes" : "No") << "\n";
    return 0;
}

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     rep(i, n) cin >> a[i];

//     int odd = 0, mul = 0;
//     bool ok = true;
//     rep(i, n)
//     {
//         if (a[i] & 1)
//             odd++;
//         if (a[i] % 4 == 0)
//             mul++;
//     }
//     if (odd > mul + 1)
//         ok = false;
//     if (odd == mul + 1 && n % 2 == 0)
//         ok = false;
//     cout << (ok ? "Yes" : "No") << "\n";
//     return 0;
// }