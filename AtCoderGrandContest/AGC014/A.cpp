#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c && a % 2 != 1)
    {
        cout << -1 << '\n';
        return 0;
    }

    int n = 0;
    while (a % 2 == 0 && b % 2 == 0 && c % 2 == 0)
    {
        int aa = a, bb = b, cc = c;
        a = bb / 2 + cc / 2;
        b = cc / 2 + aa / 2;
        c = aa / 2 + bb / 2;
        n++;
    }
    cout << n << '\n';
    return 0;
}
