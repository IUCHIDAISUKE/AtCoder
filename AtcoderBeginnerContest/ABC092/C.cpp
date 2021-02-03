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
    int n;
    cin >> n;
    vector<int> a(n + 1);
    a[0] = 0;
    rep2(i, 1, n + 1) cin >> a[i];
    a.push_back(0);

    int sum = 0;
    rep(i, n + 1) sum += abs(a[i + 1] - a[i]);
    for (int i = 1; i < n + 1; i++)
        cout << sum + abs(a[i + 1] - a[i - 1]) - abs(a[i + 1] - a[i]) - abs(a[i] - a[i - 1]) << "\n";
    return 0;
}