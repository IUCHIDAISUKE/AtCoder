#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int a[3][3];
    rep(i, 3) rep(j, 3) cin >> a[i][j];

    int n;
    cin >> n;
    vector<int> b(n);
    rep(i, n) cin >> b[i];

    rep(i, n)
    {
        rep(j, 3)
        {
            rep(k, 3)
            {
                if (b[i] == a[j][k])
                {
                    a[j][k] = 0;
                }
            }
        }
    }

    bool ok = false;
    rep(i, 3)
    {
        bool ck = true;
        rep(j, 3)
        {
            if (a[i][j] != 0)
            {
                ck = false;
            }
        }
        if (ck)
        {
            ok = true;
        }
    }

    rep(i, 3)
    {
        bool ck = true;
        rep(j, 3)
        {
            if (a[j][i] != 0)
            {
                ck = false;
            }
        }
        if (ck)
        {
            ok = true;
        }
    }

    bool ck = true;
    rep(i, 3)
    {
        if (a[i][i] != 0)
        {
            ck = false;
        }
    }
    if (ck)
    {
        ok = true;
    }

    ck = true;
    rep(i, 3)
    {
        if (a[i][2 - i] != 0)
        {
            ck = false;
        }
    }
    if (ck)
    {
        ok = true;
    }

    cout << (ok ? "Yes" : "No") << '\n';
    return 0;
}
