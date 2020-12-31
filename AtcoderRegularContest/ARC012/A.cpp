#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    string d;
    cin >> d;

    map<string, int> mp = {{"Sunday", 0}, {"Monday", 5}, {"Tuesday", 4}, {"Wednesday", 3}, {"Thursday", 2}, {"Friday", 1}, {"Saturday", 0}};

    cout << mp[d] << '\n';
    return 0;
}
