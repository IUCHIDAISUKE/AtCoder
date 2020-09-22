#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    vector<int> abc(3);
    rep(i, 3) cin >> abc[i];

    sort(all(abc));

    cout << abc[1] << '\n';

    return 0;
}
