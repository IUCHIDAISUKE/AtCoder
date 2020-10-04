#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n;
    cin >> n;
    vector<tuple<string, int, int>> v(n);
    rep(i, n)
    {
        string s;
        int n;
        cin >> s >> n;
        n *= -1;
        v[i] = make_tuple(s, n, i + 1);
    }

    sort(all(v));
    rep(i, n)
    {
        cout << get<2>(v[i]) << '\n';
    }
    return 0;
}
