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

int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}

int main()
{

    int a, b, n;
    cin >> a >> b >> n;

    cout << (n + lcm(a, b) - 1) / lcm(a, b) * lcm(a, b) << '\n';
    return 0;
}
