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
    int n;
    cin >> n;
    vector<int> a(1 << n);
    rep(i, 1 << n) cin >> a[i];

    int ma, mb;
    ma = mb = 0;
    rep(i, 1 << n)
    {
        if (i < 1 << n - 1)
            ma = max(ma, a[i]);
        else
            mb = max(mb, a[i]);
    }
    int ans = min(ma, mb);
    rep(i, 1 << n)
    {
        if (ans == a[i])
            cout << i + 1 << '\n';
    }
    return 0;
}

// #include <bits/stdc++.h>
// #define rep(i, n) for (int i = 0; i < (n); i++)
// #define rep2(i, a, b) for (int i = (a); i < (b); ++i)
// #define all(a) (a).begin(), (a).end()
// using ll = long long;
// using P = std::pair<int, int>;

// const ll INF = 1LL << 60;
// const int MOD = (int)1e9 + 7;
// const double PI = acos(-1);

// int main()
// {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(1 << n);
//     rep(i, 1 << n) std::cin >> a[i];

//     std::vector<int> remaining(1 << n);
//     std::iota(all(remaining), 0);

//     rep(i, n)
//     {
//         std::vector<int> next_reamaining;
//         rep(j, 1 << (n - i - 1))
//         {
//             if (a[remaining[j * 2]] > a[remaining[j * 2 + 1]])
//                 next_reamaining.push_back(remaining[j * 2]);
//             else
//                 next_reamaining.push_back(remaining[j * 2 + 1]);
//         }
//         if (i == n - 1)
//         {
//             std::cout << (remaining[0] == next_reamaining[0] ? remaining[1] : remaining[0]) + 1 << '\n';
//         }
//         remaining = next_reamaining;
//     }
//     return 0;
// }