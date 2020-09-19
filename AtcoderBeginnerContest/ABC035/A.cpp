#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int gcd(int a, int b)
{
    return (!b ? a : gcd(b, a % b));
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << a / gcd(a, b) << ':' << b / gcd(a, b) << '\n';

    return 0;
}
