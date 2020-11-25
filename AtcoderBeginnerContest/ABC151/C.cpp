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
    int n, m;
    cin >> n >> m;
    vector<int> ac(n), pena(n);
    rep(i, m)
    {
        int p;
        string s;
        cin >> p >> s;
        p--;
        if (ac[p])
            continue;
        if (s == "AC")
            ac[p] = 1;
        else
            pena[p]++;
    }
    int a = 0, p = 0;
    rep(i, n)
    {
        a += ac[i];
        if (ac[i])
            p += pena[i];
    }

    cout << a << ' ' << p << '\n';
    return 0;
}

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> p(m);
//     vector<string> s(m);
//     rep(i, m) cin >> p[i] >> s[i];

//     int ac = 0, wa = 0;
//     vector<bool> ck1(n, false), ck2(n, true);
//     rep(i, m)
//     {
//         if (s[i] == "AC")
//             ck1[p[i] - 1] = true;
//     }
//     rep(i, n) ac += ck1[i];

//     rep(i, m)
//     {
//         if (s[i] == "WA" && ck2[p[i] - 1] && ck1[p[i] - 1])
//             wa++;
//         if (s[i] == "AC")
//             ck2[p[i] - 1] = false;
//     }
//     cout << ac << ' ' << wa << '\n';
//     return 0;
// }
