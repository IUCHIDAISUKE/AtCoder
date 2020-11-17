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
    string s;
    cin >> n >> s;

    int ans = 0;
    rep(i, 1000)
    {
        int a[3] = {i / 100, (i / 10) % 10, i % 10}, poss = 0;
        rep(i, n) if (poss <= 2 && a[poss] == (s[i] - '0')) poss++;
        if (poss == 3)
            ans++;
    }
    cout << ans << '\n';
    return 0;
}
