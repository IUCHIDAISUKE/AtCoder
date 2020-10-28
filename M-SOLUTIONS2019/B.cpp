#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    string s;
    cin >> s;

    int cnt = 0;
    rep(i, s.size()) if (s[i] == 'o') cnt++;

    cout << ((15 - s.size() + cnt >= 8) ? "YES" : "NO") << '\n';
    return 0;
}
