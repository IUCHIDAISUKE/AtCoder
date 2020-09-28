#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    string a, b;
    cin >> a >> b;

    string n = a + b;
    int res = 0;
    rep(i, n.size())
    {
        res = res * 10 + (n[i] - '0');
    }

    cout << res * 2 << '\n';
    return 0;
}
