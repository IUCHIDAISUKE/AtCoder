#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    cout << (m1 % 12 == m2 - 1 ? 1 : 0) << '\n';
    return 0;
}
