#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

using namespace std;
using ll = long long int;
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
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    ll ans = 0;
    int right = 0;
    set<int> st;
    for (int left = 0; left < n; left++)
    {
        while (right < n && st.count(a[right]) == 0)
        {
            st.insert(a[right]);
            right++;
        }
        ans = max(ans, (ll)right - left);
        if (right == left)
            right++;
        else
            st.erase(a[left]);
    }

    cout << ans << "\n";
    return 0;
}

// set<int> s;

// bool ck(int num)
// {
//     int tmp = s.size();
//     s.insert(num);
//     return s.size() != tmp;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     rep(i, n) cin >> a[i];

//     int ans = 0;
//     int right = 0;
//     for (int left = 0; left < n; left++)
//     {
//         while (right < n && ck(a[right]))
//         {
//             s.insert(a[right]);
//             right++;
//         }
//         ans = max(ans, (int)s.size());
//         if (left == right)
//             right++;
//         else
//             s.erase(a[left]);
//     }
//     cout << ans << '\n';
//     return 0;
// }
