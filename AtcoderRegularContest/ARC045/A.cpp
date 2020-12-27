#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
const ll LIMIT = (ll)2e12;
int main()
{
    string s, t;
    getline(cin, s);

    int flag = 0;
    int min = 101;
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == 'L')
        {
            if (flag)
                cout << ' ';
            cout << '<';
        }
        if (s[i] == 'R')
        {
            if (flag)
                cout << ' ';
            cout << '>';
        }
        if (s[i] == 'A')
        {
            if (flag)
                cout << ' ';
            cout << 'A';
        }
        if (min > i)
        {
            flag = 1;
            min = i;
        }
    }
    cout << '\n';
    return 0;
}
