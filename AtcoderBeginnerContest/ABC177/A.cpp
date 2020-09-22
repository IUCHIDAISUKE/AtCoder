#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int d, t, s;
    cin >> d >> t >> s;

    cout << ((d + s - 1) / s <= t ? "Yes" : "No") << '\n';
    return 0;
}
