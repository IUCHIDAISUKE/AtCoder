#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    string s;
    cin >> s;

    string week[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    int ans;
    rep(i, 7)
    {
        if (s == week[i])
            ans = i;
    }

    cout << (6 - ans == 0 ? 7 : 6 - ans) << '\n';
    return 0;
}
