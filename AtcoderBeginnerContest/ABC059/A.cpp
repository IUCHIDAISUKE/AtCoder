#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    string a, b, c;
    cin >> a >> b >> c;

    cout << (char)(a[0] - 'a' + 'A') << (char)(b[0] - 'a' + 'A') << (char)(c[0] - 'a' + 'A') << '\n';
    return 0;
}
