#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int tribonachi(int n)
{
    if (n == 0 || n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    return tribonachi(n - 1) + tribonachi(n - 2) + tribonachi(n - 3);
}

int main()
{
    int n;
    cin >> n;

    cout << tribonachi(n) << '\n';
    return 0;
}
