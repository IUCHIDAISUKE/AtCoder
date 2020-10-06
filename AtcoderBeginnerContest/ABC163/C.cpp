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
    rep(i, n - 1) cin >> a[i];

    vector<int> buckt(n + 1, 0);
    rep(i, n - 1) buckt[a[i] - 1]++;
    rep(i, n)
    {
        cout << buckt[i] << '\n';
    }
    return 0;
}
