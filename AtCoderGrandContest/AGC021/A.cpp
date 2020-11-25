#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;

// int digit(ll n)
// {
//     int cnt = 0;
//     while (n)
//     {
//         cnt++;
//         n /= 10;
//     }
//     return cnt;
// }

// int main()
// {
//     ll n;
//     cin >> n;

//     int cnt = digit(n), ans;
//     rep(i, cnt * 9 + 1)
//     {
//         int nine = i / 9, rem = i % 9;
//         ll num = rem;
//         while (nine)
//         {
//             num *= 10;
//             num += 9;
//             nine--;
//         }
//         if (num <= n)
//             ans = i;
//     }

//     cout << ans << '\n';
//     return 0;
// }

int digit(ll n, ll *ma)
{
    int cnt = 0;
    while (n)
    {
        cnt++;
        *ma = n % 10;
        n /= 10;
    }
    return cnt;
}

int main()
{
    ll n;
    cin >> n;

    ll num;
    int cnt = digit(n, &num);
    int ans = (cnt - 1) * 9 + num;
    while (cnt - 1)
    {
        num *= 10;
        num += 9;
        cnt--;
    }
    if (num > n)
        ans--;
    cout << ans << '\n';
    return 0;
}
