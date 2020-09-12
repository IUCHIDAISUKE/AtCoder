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
    a += b;

    int n = 0;
    rep(i, a.size()) n = 10 * n + a[i] - '0';

    for (int i = 4; i * i <= n; i++)
    {
        if (n == i * i)
        {
            cout << "Yes" << '\n';
            return 0;
        }
    }

    cout << "No" << '\n';
    return 0;
}
