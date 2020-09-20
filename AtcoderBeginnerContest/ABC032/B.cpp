#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{

    string s;
    int k;
    cin >> s >> k;

    set<string> st;
    if (s.size() < k)
    {
        cout << st.size() << '\n';
        return (0);
    }
    rep(i, s.size() - k + 1)
    {
        st.insert(s.substr(i, k));
    }

    cout << st.size() << '\n';
    return 0;
}
