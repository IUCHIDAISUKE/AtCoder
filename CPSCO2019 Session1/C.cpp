#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int n, k;
vector<int> a;

int ans = 1001001001;

int cnt(vector<int> depth)
{
    int sum = 0;
    int res = 0;
    rep2(i, 1, k + 1) sum += a[depth[i] - 2];
    while (sum)
    {
        int tmp = sum % 10;
        res += tmp / 5;
        res += (tmp % 5);
        sum /= 10;
    }
    return res;
}

void dfs(vector<int> depth)
{
    if (depth.size() == k + 1)
    {
        ans = min(ans, cnt(depth));
        return;
    }

    depth.push_back(depth.back() + 1);
    while (depth.back() <= n + 1)
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
