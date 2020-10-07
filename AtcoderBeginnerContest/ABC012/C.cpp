#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n;
    cin >> n;

    int t = 2025 - n;
    rep2(i, 1, 10)
    {
        if (t % i == 0 && 1 <= t / i && t / i <= 9)
        {
            printf("%d x %d\n", i, t / i);
        }
    }
    return 0;
}
