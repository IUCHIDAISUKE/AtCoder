#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int a;
    string s;
    cin >> a >> s;

    cout << (a < 3200 ? "red" : s) << '\n';
    return 0;
}
