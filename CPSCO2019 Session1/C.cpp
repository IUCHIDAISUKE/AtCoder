#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int n, k;
vector<int> a;

int ans = 1001001001;

int cnt(int n)
{
    int res = 0;
    while (n)
    {
        int tmp = n % 10;
        res += tmp / 5;
        res += tmp % 5;
        n /= 10;
    }
    return res;
}

void dfs(vector<int> depth)
{
    if (depth.size() == k + 1)
    {
        int tmp = 0;
        rep2(i, 1, k + 1)
        {
            tmp += a[depth[i] - 1];
        }
        ans = min(ans, cnt(tmp));
        return;
    }

    depth.push_back(depth.back() + 1);
    while (depth.back() < n + 1)
    {
        dfs(depth);
        depth.back()++;
    }
}

int main()
{
    cin >> n >> k;
    a = vector<int>(n);
    rep(i, n) cin >> a[i];

    dfs(vector<int>(1, 1));
    cout << ans << '\n';
    return 0;
}

// int main()
// {
//     cin >> n >> k;
//     a = vector<int>(n);
//     rep(i, n) cin >> a[i];

//     vector<int> per(n, 1);
//     rep(i, n - k) per[i] = 0;
//     do
//     {
//         int tmp = 0;
//         rep(i, n)
//         {
//             if (per[i])
//                 tmp += a[i];
//         }
//         ans = min(ans, cnt(tmp));
//     } while (next_permutation(all(per)));

//     cout << ans << '\n';
//     return 0;
// }
