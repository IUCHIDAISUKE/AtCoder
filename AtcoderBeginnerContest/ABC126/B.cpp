#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    int s;
    cin >> s;
    int up = s / 100;
    int down = s % 100;

    bool yymm = false, mmyy = false;
    if (0 <= up && up <= 99 && 1 <= down && down <= 12)
    {
        yymm = true;
    }
    if (1 <= up && up <= 12 && 0 <= down && down <= 99)
    {
        mmyy = true;
    }

    if (yymm && mmyy)
    {
        cout << "AMBIGUOUS" << '\n';
    }
    else if (yymm)
    {
        cout << "YYMM" << '\n';
    }
    else if (mmyy)
    {
        cout << "MMYY" << '\n';
    }
    else
    {
        cout << "NA" << '\n';
    }

    return 0;
}
