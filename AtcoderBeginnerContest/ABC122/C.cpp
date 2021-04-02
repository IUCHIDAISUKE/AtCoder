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
	int n, q;
	string s;
	cin >> n >> q >> s;
	vector<int> l(q), r(q), cumsum(n + 1);
	rep(i, q) cin >> l[i] >> r[i];
	rep(i, n)
	{
		if (s[i] == 'A' && s[i + 1] == 'C')
			cumsum[i + 1] += cumsum[i] + 1;
		else
			cumsum[i + 1] = cumsum[i];
	}

	rep(i, q)
			cout
		<< cumsum[r[i] - 1] - cumsum[l[i] - 1] << "\n";
	return 0;
}

// int main()
// {
// 	int n, q;
// 	string s;
// 	cin >> n >> q >> s;
// 	vector<int> l(q), r(q);
// 	rep(i, q) cin >> l[i] >> r[i];

// 	vector<int> cum(n, 0);
// 	rep(i, n - 1)
// 		cum[i + 1] = (s.substr(i, 2) == "AC");
// 	rep(i, n - 1) cum[i + 1] = cum[i] + cum[i + 1];

// 	rep(i, q)
// 			cout
// 		<< cum[r[i] - 1] - cum[l[i] - 1] << '\n';

// 	return 0;
// }

// int main()
// {
// 	int n, q;
// 	string s;
// 	cin >> n >> q >> s;
// 	vector<int> cum(n + 1, 0), l(q), r(q);
// 	for (int i = 0; i < q; i++)
// 	{
// 		cin >> l[i] >> r[i];
// 	}

// 	for (int i = 0; i < n - 1; i++)
// 	{
// 		if (s.substr(i, 2) == "AC" && i < n - 1)
// 		{
// 			cum[i + 2] = cum[i + 1] + 1;
// 		}
// 		else
// 		{
// 			cum[i + 2] = cum[i + 1];
// 		}
// 	}

// 	for (int i = 0; i < q; i++)
// 	{
// 		cout << cum[r[i]] - cum[l[i]] << '\n';
// 	}

// 	return 0;
// }
