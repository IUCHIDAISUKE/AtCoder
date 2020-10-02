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

    bool ok = true;
    rep(i, n)
    {
        if (a[i] % 2)
            continue;
        if (a[i] % 3 && a[i] % 5)
        {
            ok = false;
        }
    }

    cout << (ok ? "APPROVED" : "DENIED") << '\n';
    return 0;
}
