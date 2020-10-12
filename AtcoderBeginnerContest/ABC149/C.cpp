#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

bool is_prime(int x)
{
    // if (x <= 1)
    //     return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (!(x % i))
            return false;
    }
    return true;
}

int main()
{
    int x;
    cin >> x;

    while (1)
    {
        if (is_prime(x))
        {
            cout << x << '\n';
            return 0;
        }
        x++;
    }

    return 0;
}
