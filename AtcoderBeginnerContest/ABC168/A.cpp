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

    int t = n % 10;

    if (t == 3)
    {
        cout << "bon" << '\n';
    }
    else if (t == 0 or t == 1 or t == 6 or t == 8)
    {
        cout << "pon" << '\n';
    }
    else
    {
        cout << "hon" << '\n';
    }
    return 0;
}
