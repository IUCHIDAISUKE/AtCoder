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
    if (n == 100)
    {
        cout << "Perfect" << '\n';
    }
    else if (90 <= n)
    {
        cout << "Great" << '\n';
    }
    else if (60 <= n)
    {
        cout << "Good" << '\n';
    }
    else
    {
        cout << "Bad" << '\n';
    }
    return 0;
}
