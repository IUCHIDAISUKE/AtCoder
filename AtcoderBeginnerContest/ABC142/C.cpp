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
    vector<P> a;
    rep(i, n)
    {
        int x;
        cin >> x;
        a.push_back(make_pair(x, i + 1));
    }

    sort(all(a));
    rep(i, n)
    {
        if (i)
            cout << ' ';
        cout << a[i].second;
    }
    cout << '\n';
    return 0;
}
