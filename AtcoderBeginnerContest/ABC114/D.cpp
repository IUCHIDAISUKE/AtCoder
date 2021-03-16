#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

using namespace std;
using ll = int64_t;
using P = pair<int, int>;

const ll INF_L = 1LL << 60;
const int INF_I = 1 << 30;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

int main()
{
    int n;
    cin >> n;

    vector<int> fact(n + 1, 0);
    for (int i = 1; i < n + 1; i++)
    {
        int tmp = i;
        for (int j = 2; j * j < i + 1; j++)
        {
            while (tmp % j == 0)
            {
                fact[j]++;
                tmp /= j;
            }
        }
        if (tmp != 1)
            fact[tmp]++;
    }

    int ans = 0;
    for (int a : fact)
    {
        if (a >= 74)
            ans++;
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (i == j)
                continue;
            if (fact[i] >= 4 && fact[j] >= 14)
                ans++;
            if (fact[i] >= 24 && fact[j] >= 2)
                ans++;
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            for (int k = j + 1; k < n + 1; k++)
            {
                if (i == j || i == k)
                    continue;
                if (fact[i] >= 2 && fact[j] >= 4 && fact[k] >= 4)
                    ans++;
            }
        }
    }

    cout << ans << "\n";
}