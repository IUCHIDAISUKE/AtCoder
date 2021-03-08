#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF_L = 1LL << 60;
const int INF_I = 1 << 30;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

int main()
{
    int a, b;
    cin >> a >> b;

    int n = a + b;
    if (n >= 15 && b >= 8)
    {
        cout << 1 << "\n";
    }
    else if (n >= 10 && b >= 3)
    {
        cout << 2 << "\n";
    }
    else if (n >= 3)
    {
        cout << 3 << "\n";
    }
    else
    {
        cout << 4 << "\n";
    }
    return 0;
}
