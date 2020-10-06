#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int x3, y3, x4, y4;
    x3 = y1 - y2 + x2, y3 = -x1 + x2 + y2;
    x4 = y2 - y3 + x3, y4 = -x2 + x3 + y3;
    printf("%d %d %d %d\n", x3, y3, x4, y4);
    return 0;
}
