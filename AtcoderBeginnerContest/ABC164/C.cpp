#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int gcd(int a, int b)
{
    return (b ? gcd(b, a % b) : a);
}

const ll MOD = 1000000000 + 7;

int main()
{

    int n;
    cin >> n;
    set<string> s;
    rep(i, n)
    {
        string str;
        cin >> str;
        s.insert(str);
    }

    cout << s.size() << '\n';
    return 0;
}
