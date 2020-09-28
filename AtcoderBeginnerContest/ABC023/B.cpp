#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n;
    string s;
    cin >> n >> s;

    string t = "b";
    int cnt = 0;
    while (t.size() < n)
    {
        if (cnt % 3 == 0)
        {
            t = "a" + t + "c";
        }
        else if (cnt % 3 == 1)
        {
            t = "c" + t + "a";
        }
        else
        {
            t = "b" + t + "b";
        }
        cnt++;
    }
    cout << (s == t ? cnt : -1) << '\n';
    return 0;
}
