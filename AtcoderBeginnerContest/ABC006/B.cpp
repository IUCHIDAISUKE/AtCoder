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
    vector<int> a(n + 1, 0);
    a[3] = 1;

    rep2(i, 3, n)
    {
        a[i + 1] = (a[i] + a[i - 1] + a[i - 2]) % 10007;
    }

    cout << a[n] << '\n';
    return 0;
}
