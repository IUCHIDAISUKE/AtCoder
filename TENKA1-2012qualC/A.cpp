#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF_L = 1LL << 60;
const int INF_I = 1 << 30;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

int main()
{
    int n;
    cin >> n;

    vector<bool> is_prime(n, true);
    is_prime[0] = false, is_prime[1] = false;
    rep2(i, 2, n)
    {
        int tmp = 2;
        if (is_prime[i])
        {
            while (i * tmp < n)
            {
                is_prime[i * tmp] = false;
                tmp++;
            }
        }
    }
    int ans = 0;
    rep(i, n) ans += is_prime[i];
    cout << ans << "\n";
    return 0;
}
