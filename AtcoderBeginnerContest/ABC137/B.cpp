#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int k, x;
    cin >> k >> x;

    for (int i = x - k + 1; i < x + k; i++)
    {
        if (i != x - k + 1)
        {
            cout << ' ';
        }
        cout << i;
    }

    cout << '\n';
    return 0;
}
