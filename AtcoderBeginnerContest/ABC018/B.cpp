#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    string s;
    int n;
    cin >> s >> n;
    vector<int> l(n), r(n);
    rep(i, n) cin >> l[i] >> r[i];

    rep(i, n)
        reverse(s.begin() + l[i] - 1, s.begin() + r[i]);

    cout << s << '\n';
    return 0;
}
