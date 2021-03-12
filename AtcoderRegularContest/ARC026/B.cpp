#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

using namespace std;
using ll = int64_t;
using P = pair<int, int>;

const ll INF_L = 1LL << 60;
const int INF_I = 1 << 30;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

int main()
{
    ll n;
    cin >> n;

    vector<ll> div;
    ll tmp = n;
    for (ll i = 1; i * i < n + 1; i++)
    {
        if (tmp % i == 0)
        {
            div.push_back(i);
            if (tmp / i != i)
                div.push_back(tmp / i);
        }
    }
    sort(all(div));
    ll ma = -n;
    for (ll i : div)
        ma += i;
    if (ma < n)
        cout << "Deficient"
             << "\n";
    else if (ma == n)
        cout << "Perfect"
             << "\n";
    else
        cout << "Abundant"
             << "\n";
    return 0;
}
