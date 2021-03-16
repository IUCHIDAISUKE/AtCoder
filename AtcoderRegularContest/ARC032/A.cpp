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
    int n;
    cin >> n;

    int s = n * (n + 1) / 2;
    bool ok = true;
    if (s < 2)
        ok = false;
    for (int i = 2; i * i < s; i++)
    {
        if (s % i == 0)
            ok = false;
    }
    cout << (ok ? "WANWAN" : "BOWWOW") << "\n";
    return 0;
}
