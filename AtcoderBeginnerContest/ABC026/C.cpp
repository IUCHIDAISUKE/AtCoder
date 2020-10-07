#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

int main()
{
    vector<int> x(5);
    rep(i, 5) cin >> x[i];

    vector<int> ck;
    rep(i, 5)
    {
        rep2(j, i + 1, 5)
        {
            rep2(k, j + 1, 5)
            {
                int tmp = x[i] + x[j] + x[k];
                ck.push_back(tmp);
            }
        }
    }
    sort(all(ck));
    reverse(all(ck));

    cout << ck[2] << '\n';
    return 0;
}
