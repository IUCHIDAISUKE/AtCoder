#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << (((a + d - 1) / d >= (b + c - 1) / b) ? "Yes" : "No") << '\n';
    return 0;
}
