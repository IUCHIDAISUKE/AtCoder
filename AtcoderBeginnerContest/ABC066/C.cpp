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
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    deque<int> dq;
    rep(i, n)
    {
        if (i % 2 == n % 2)
            dq.push_back(a[i]);
        else
            dq.push_front(a[i]);
    }

    rep(i, n)
    {
        if (i)
            cout << ' ';
        cout << dq[i];
    }
    cout << '\n';
}

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     rep(i, n) cin >> a[i];

//     if (n == 1)
//     {
//         cout << a[0] << '\n';
//         return 0;
//     }

//     reverse(all(a));
//     int tmp = 0;
//     while (tmp < n)
//     {
//         cout << a[tmp] << ' ';
//         tmp += 2;
//     }
//     reverse(all(a));
//     tmp -= n;
//     while (tmp + 2 < n)
//     {
//         cout << a[tmp] << ' ';
//         tmp += 2;
//     }
//     cout << a[tmp] << '\n';
// }
