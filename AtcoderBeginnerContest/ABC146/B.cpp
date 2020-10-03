#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n;
    string s;
    cin >> n >> s;

    rep(i, s.size())
    {
        s[i] = (s[i] - 'A' + n) % 26 + 'A';
    }
    cout << s << '\n';
    return 0;
}
