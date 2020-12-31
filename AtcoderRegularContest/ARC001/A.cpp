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
    string s;
    cin >> n >> s;

    int a, b, c, d;
    a = count(all(s), '1');
    b = count(all(s), '2');
    c = count(all(s), '3');
    d = count(all(s), '4');

    cout << max({a, b, c, d}) << ' ' << min({a, b, c, d}) << endl;
    return 0;
}
