#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, n) cin >> v[i];

    int sum = 0;
    rep(i, n)
    {
        if ((i + 1) & 1 && v[i] & 1)
            sum++;
    }

    cout << sum << '\n';
    return 0;
}
