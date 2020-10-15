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
    vector<P> ab;
    rep(i, n)
    {
        int a, b;
        cin >> a >> b;
        ab.push_back(make_pair(a, b));
    }

    sort(all(ab));
    reverse(all(ab));

    cout << ab[0].first + ab[0].second << '\n';
    return 0;
}
