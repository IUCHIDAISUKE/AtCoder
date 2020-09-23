#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

ll n, ans = 0;

bool ck(ll num)
{
    string str;
    ll tmp = num;
    while (num)
    {
        str += num % 10 + '0';
        num /= 10;
    }
    int n3 = count(all(str), '3');
    int n5 = count(all(str), '5');
    int n7 = count(all(str), '7');
    return n3 > 0 and n5 > 0 and n7 > 0 and tmp <= n;
}

void dfs(ll x)
{
    if (ck(x))
        ans++;
    if (x <= 1000000000)
    {
        dfs(10 * x + 3);
        dfs(10 * x + 5);
        dfs(10 * x + 7);
    }
}

int main()
{
    cin >> n;
    dfs(0LL);

    cout << ans << '\n';
    return 0;
}
