#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

ll n;
int ans;

bool ck(ll num)
{
    vector<int> dis(3, 0);
    while (num)
    {
        int tmp = num % 10;
        if (tmp == 7)
            dis[2]++;
        else
            dis[tmp / 5]++;
        num /= 10;
    }
    return dis[0] && dis[1] && dis[2];
}

void dfs(ll num)
{
    if (num > n)
        return;
    if (ck(num) && num <= n)
        ans++;
    dfs(num * 10 + 3);
    dfs(num * 10 + 5);
    dfs(num * 10 + 7);
}

int main()
{
    cin >> n;
    dfs(0LL);

    cout << ans << '\n';

    return 0;
}

// ll n, ans = 0;

// bool ck(ll num)
// {
//     string str;
//     ll tmp = num;
//     while (num)
//     {
//         str += num % 10 + '0';
//         num /= 10;
//     }
//     int n3 = count(all(str), '3');
//     int n5 = count(all(str), '5');
//     int n7 = count(all(str), '7');
//     return n3 > 0 and n5 > 0 and n7 > 0 and tmp <= n;
// }

// void dfs(ll x)
// {
//     if ()
//         if (x <= (ll)1e9)
//         {
//             dfs(x * 10 + 3);
//             dfs(x * 10 + 5);
//             dfs(x * 10 + 7);
//         }
// }

// int main()
// {
//     cin >> n;
//     dfs(0LL);

//     cout << ans << '\n';
//     return 0;
// }
