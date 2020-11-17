#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int ma = (int)1e5 * 2 + 10;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> s(m), c(m);
    rep(i, m) cin >> s[i] >> c[i];

    rep(i, 1000 + 1)
    {
        string str = to_string(i);
        if (str.size() != n)
            continue;
        bool ok = true;
        rep(j, m)
        {
            if (str[s[j] - 1] != c[j] + '0')
                ok = false;
        }
        if (ok)
        {
            cout << i << '\n';
            return 0;
        }
    }
    cout << -1 << '\n';
    return 0;
}

// int digit(int n)
// {
//     if (n < 10)
//     {
//         return 1;
//     }
//     return digit(n / 10) + 1;
// }

// string int_to_string(int n)
// {
//     string res = "";
//     if (n == 0)
//     {
//         res = '0';
//     }
//     while (n)
//     {
//         char tmp = (n % 10) + '0';
//         res = tmp + res;
//         n /= 10;
//     }
//     return res;
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> s(m), c(m);
//     rep(i, m) cin >> s[i] >> c[i];

//     rep(i, 1000)
//     {
//         if (n != digit(i))
//         {
//             continue;
//         }

//         bool flag = true;
//         rep(j, m)
//         {
//             string st_num = int_to_string(i);
//             if (st_num[s[j] - 1] != c[j] + '0')
//             {
//                 flag = false;
//             }
//         }
//         if (flag)
//         {
//             cout << i << '\n';
//             return 0;
//         }
//     }

//     cout << -1 << '\n';
//     return (0);
// }

// using P = pair<int, int>;

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<P> sc(m);
//     rep(i, m) cin >> sc[i].first >> sc[i].second;

//     rep(i, 1000)
//     {
//         int keta = 1;
//         int ni = i / 10;
//         vector<int> d(1, i % 10);
//         while (ni)
//         {
//             keta++;
//             d.push_back(ni % 10);
//             ni /= 10;
//         }
//         reverse(all(d));
//         if (keta != n)
//             continue;

//         bool flag = true;

//         rep(j, m)
//         {
//             if (d[sc[j].first - 1] != sc[j].second)
//             {
//                 flag = false;
//             }
//         }

//         if (flag)
//         {
//             cout << i << '\n';
//             return 0;
//         }
//     }

//     cout << -1 << '\n';
//     return (0);
// }
