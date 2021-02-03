#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);

int main()
{
    int x;
    cin >> x;

    ll sum;
    rep(i, x + 1)
    {
        sum = i * (i + 1) / 2;
        if (sum >= x)
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}