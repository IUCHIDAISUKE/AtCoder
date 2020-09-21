#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> d(n);
    vector<string> s(n);
    rep(i, n) cin >> s[i] >> d[i];

    int ans = 0;
    rep(i, n)
    {
        if (s[i] == "East")
        {
            ans += max(a, min(b, d[i]));
        }
        else
        {
            ans -= max(a, min(b, d[i]));
        }
    }

    if (ans > 0)
    {
        printf("East %d\n", ans);
    }
    else if (ans == 0)
    {
        printf("%d\n", ans);
    }
    else
    {
        printf("West %d\n", -ans);
    }
    return 0;
}
