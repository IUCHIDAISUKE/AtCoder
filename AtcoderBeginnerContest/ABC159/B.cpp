#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

bool ck(string str, int s, int e)
{
    bool res = true;
    rep2(i, s, e)
    {
        if (str[i] != str[e - 1 - i])
        {
            res = false;
        }
    }
    return res;
}

int main()
{
    string s;
    cin >> s;

    int n = s.size();

    cout << ((ck(s, 0, (n - 1) / 2) && ck(s, (n + 3) / 2, n)) ? "Yes" : "No") << '\n';
    return 0;
}
