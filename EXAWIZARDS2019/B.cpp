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

    int cnt = 0;
    rep(i, s.size()) if (s[i] == 'R') cnt++;
    cout << ((2 * cnt > n) ? "Yes" : "No") << '\n';

    return 0;
}
