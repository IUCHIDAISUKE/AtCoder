#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

bool solve(string s)
{
    if (s.size() == 1)
        return s == "8";
    else if (s.size() == 2)
    {
        if (stoi(s) % 8 == 0)
            return true;
        swap(s[0], s[1]);
        if (stoi(s) % 8 == 0)
            return true;
        return false;
    }
    vector<int> dis(10, 0);
    for (char c : s)
        dis[c - '0']++;
    for (int i = 0; i < 1000; i += 8)
    {
        vector<int> cnt(10, 0);
        int tmp = i;
        rep(j, 3)
        {
            cnt[tmp % 10]++;
            tmp /= 10;
        }
        bool ok = true;
        rep(k, 10) if (dis[k] < cnt[k]) ok = false;
        if (ok)
            return true;
    }
    return false;
}

int main()
{
    string s;
    cin >> s;
    if (solve(s))
        puts("Yes");
    else
        puts("No");
    return 0;
}
