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
    int n;
    cin >> n;
    map<string, int> mp;
    rep(i, n)
    {
        string s;
        cin >> s;
        mp[s]++;
    }

    int mx = 0;
    for (auto p : mp)
        mx = max(mx, p.second);
    for (auto p : mp)
    {
        if (p.second != mx)
            continue;
        cout << p.first << '\n';
    }
    return 0;
}

// int main()
// {
//     int n;
//     cin >> n;
//     map<string, int> mp;
//     rep(i, n)
//     {
//         string s;
//         cin >> s;
//         mp[s]++;
//     }

//     vector<pair<int, string>> v;
//     for (auto itr = mp.begin(); itr != mp.end(); itr++)
//         v.push_back(make_pair(-1 * itr->second, itr->first));
//     sort(all(v));
//     int tmp = v[0].first;
//     rep(i, v.size())
//     {
//         if (tmp != v[i].first)
//             break;
//         cout << v[i].second << '\n';
//     }
//     return 0;
// }
