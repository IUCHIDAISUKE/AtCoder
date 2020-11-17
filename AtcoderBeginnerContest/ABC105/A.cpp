#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int ma = (int)1e5 * 2 + 10;

int main()
{
    int n, k;
    cin >> n >> k;

    cout << 1 - (n % k == 0) << '\n';
    return 0;
}
