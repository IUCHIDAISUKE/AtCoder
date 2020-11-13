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
    int a, b;
    cin >> a >> b;

    int mi = min(a, b), ma = max(a, b);
    if (mi <= 0 && 0 <= ma)
    {
        cout << "Zero" << '\n';
    }
    else if (0 < mi)
    {
        cout << "Positive" << '\n';
    }
    else
    {
        int n = ma - mi + 1;
        if (n & 1)
        {
            cout << "Negative" << '\n';
        }
        else
        {
            cout << "Positive" << '\n';
        }
    }

    return 0;
}
