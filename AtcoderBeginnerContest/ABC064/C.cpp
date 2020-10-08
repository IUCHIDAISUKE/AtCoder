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
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    set<int> st;
    int cnt = 0;
    rep(i, n)
    {
        if (a[i] >= 3200)
            cnt++;
        else
            st.insert(a[i] / 400);
    }

    if (st.size())
    {
        cout << st.size() << ' ' << (int)st.size() + cnt << '\n';
    }
    else
    {
        cout << 1 << ' ' << cnt << '\n';
    }
    return 0;
}
d
