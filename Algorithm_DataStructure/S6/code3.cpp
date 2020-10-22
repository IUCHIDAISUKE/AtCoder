#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    cout << "Start Game!" << endl;

    int l = 20, r = 36;

    while (r - l > 1)
    {
        int m = l + (r - l) / 2;

        cout << "Is the age less than " << m << " ?(y/n)" << endl;
        string s;
        cin >> s;

        if (s == "y")
            r = m;
        else
            l = m;
    }
    cout << l << endl;
}
