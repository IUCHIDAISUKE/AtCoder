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
    pair<int, int> itv[n];
    rep(i, n)
    {
        int x, l;
        cin >> x >> l;
        itv[i].first = x + l, itv[i].second = x - l;
    }
    sort(itv, itv + n);
    int ans = 0, t = itv[0].second;
    rep(i, n)
    {
        if (t <= itv[i].second)
        {
            ans++;
            t = itv[i].first;
        }
    }

    cout << ans << "\n";
    return 0;
}