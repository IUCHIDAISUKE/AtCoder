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
    int x;
    cin >> x;

    cout << ((x % 100 <= 5 * (x / 100) || x / 100 >= 20) ? 1 : 0) << '\n';
    return 0;
}
