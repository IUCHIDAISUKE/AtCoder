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
    string s, t = "YAKI";
    cin >> s;

    cout << ((s.substr(0, 4) == t) ? "Yes" : "No") << '\n';
    return 0;
}
