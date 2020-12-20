#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int MOD = (int)1e9 + 7;

int main()
{
    ll n;
    cin >> n;

    ll n3 = 1;

    rep(i, 50)
    {
        n3 *= 3;
        if (n3 > n)
            break;
        ll n5 = 1;
        rep(j, 50)
        {
            n5 *= 5;
            if (n3 + n5 > n)
                break;
            if (n3 + n5 == n)
            {
                cout << i + 1 << ' ' << j + 1 << '\n';
                return 0;
            }
        }
    }
    cout << -1 << '\n';
    return 0;
}
