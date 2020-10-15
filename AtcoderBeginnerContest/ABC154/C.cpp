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
    set<int> st;
    rep(i, n)
    {
        int a;
        cin >> a;
        st.insert(a);
    }

    cout << (st.size() == n ? "YES" : "NO") << '\n';
    return 0;
}
