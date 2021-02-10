#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);

int main()
{
    int n;
    cin >> n;

    int tmp = 0, ma;
    for (int i = 1; i < n + 1; i++)
    {
        tmp += i;
        if (tmp >= n)
        {
            ma = i;
            break;
        }
    }
    int del = tmp - n;
    for (int i = 1; i < ma + 1; i++)
    {
        if (i == del)
            continue;
        cout << i << "\n";
    }

    return 0;
}