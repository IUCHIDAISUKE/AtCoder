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
    int n, k;
    cin >> n >> k;
    vector<string> card(n);
    rep(i, n) cin >> card[i];
    set<int> st;
    map<string, int> mp;
    sort(all(card));

    do
    {
        string tmp = "";
        rep(i, k)
            tmp += card[i];

        st.insert(stoi(tmp));
    } while (next_permutation(all(card)));

    cout << st.size() << "\n";
    return 0;
}