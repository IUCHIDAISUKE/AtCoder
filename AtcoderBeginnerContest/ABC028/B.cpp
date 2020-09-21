#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    string s;
    cin >> s;

    vector<int> cnt(6, 0);
    rep(i, s.size())
    {
        cnt[s[i] - 'A']++;
    }

    rep(i, 6)
    {
        if (i)
        {
            cout << ' ';
        }
        cout << cnt[i];
    }
    cout << '\n';
    return 0;
}
