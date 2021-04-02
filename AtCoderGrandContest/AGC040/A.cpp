#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

using namespace std;
using ll = long long int;
using P = pair<int, int>;

const ll INF_L = 1LL << 60;
const int INF_I = 1 << 30;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

int main()
{
    string s;
    cin >> s;

    int n = s.size();
    vector<int> a(n + 1, 0);
    rep(i, n) if (s[i] == '<') a[i + 1] = max(a[i] + 1, a[i + 1]);
    for (int i = n; i >= 0; i--)
        if (s[i] == '>')
            a[i] = max(a[i], a[i + 1] + 1);

    ll ans = 0;
    rep(i, n + 1) ans += a[i];
    cout << ans << "\n";
}