#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int m;
    cin >> m;

    int ans;
    if (m < 100)
    {
        ans = 0;
    }
    else if (m <= 5000)
    {
        ans = m / 100;
    }
    else if (m <= 30000)
    {
        ans = m / 1000 + 50;
    }
    else if (m <= 70000)
    {
        ans = (m / 1000 - 30) / 5 + 80;
    }
    else
    {
        ans = 89;
    }

    printf("%02d\n", ans);
    return 0;
}
