#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;

int main()
{
    int n, a, b;
    string s;
    cin >> n >> a >> b >> s;

    int num = a + b;
    rep(i, s.size())
    {
        if (s[i] == 'c')
            cout << "No" << '\n';
        else if (s[i] == 'a')
        {
            if (num)
                cout << "Yes" << '\n', num--;
            else
                cout << "No" << '\n';
        }
        else
        {
            if (num && b)
                cout << "Yes" << '\n', num--, b--;
            else
                cout << "No" << '\n';
        }
    }
    return 0;
}
