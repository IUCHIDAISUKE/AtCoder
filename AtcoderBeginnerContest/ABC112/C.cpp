#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int n;
    cin >> n;
    vector<int> x(n), y(n), h(n);
    rep(i, n)
    {
        cin >> x[i] >> y[i] >> h[i];
    }
    int idx;
    rep(i, n)
    {
        if (h[i] > 0)
        {
            idx = i;
            break;
        }
    }

    rep(cx, 100 + 1)
    {
        rep(cy, 100 + 1)
        {
            int H = h[idx] + abs(x[idx] - cx) + abs(y[idx] - cy);
            bool ck = true;
            rep(i, n)
            {

                if (h[i] != max(H - abs(x[i] - cx) - abs(y[i] - cy), 0))
                {
                    ck = false;
                    break;
                }
            }
            if (ck)
            {
                printf("%d %d %d", cx, cy, H);
            }
        }
    }
    return 0;
}
