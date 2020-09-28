#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    string x;
    cin >> x;

    bool ok = true;
    rep(i, x.size())
    {
        if (x[i] == 'c')
        {
            if (i + 1 < x.size() && x[i + 1] != 'h')
            {
                ok = false;
            }
            i++;
        }
        else if (!(x[i] == 'o' || x[i] == 'k' || x[i] == 'u'))
        {
            ok = false;
        }
    }

    cout << (ok ? "YES" : "NO") << '\n';
    return 0;
}
