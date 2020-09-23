#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{

    string n;
    cin >> n;

    int cnt = count(all(n), '7');

    cout << (cnt > 0 ? "Yes" : "No") << '\n';

    return 0;
}
