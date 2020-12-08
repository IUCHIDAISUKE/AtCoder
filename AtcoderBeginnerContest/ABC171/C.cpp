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
    ll n;
    cin >> n;

    string ans = "";
    while (n)
    {
        n--;
        char tmp = n % 26 + 'a';
        ans = tmp + ans;
        n /= 26;
    }

    cout << ans << '\n';
}
