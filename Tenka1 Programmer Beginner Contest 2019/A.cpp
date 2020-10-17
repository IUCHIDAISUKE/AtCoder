#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if ((a <= c && c <= b) || (b <= c && c <= a))
    {
        cout << "Yes" << '\n';
    }
    else
    {
        cout << "No" << '\n';
    }
    return 0;
}
