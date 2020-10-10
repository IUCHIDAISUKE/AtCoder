#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int cnt = 1;
    rep(i, n - 1)
    {
        if (s[i] != s[i + 1])
            cnt++;
    }

    cout << cnt << '\n';
    return 0;
}
