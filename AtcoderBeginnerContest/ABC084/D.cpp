#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int N_MAX = (int)1e5 + 10;

bool is_prime(int n)
{
	if (n == 0 || n == 1)
		return (false);
	if (n % 2 == 0 && n != 2)
		return (false);
	for (int i = 3; i * i < n + 1; i += 2)
	{
		if (n % i == 0)
		{
			return (false);
		}
	}
	return (true);
}

int main()
{
	int q;
	cin >> q;
	vector<int> l(q), r(q);
	rep(i, q) cin >> l[i] >> r[i];

	vector<int> cum(N_MAX, 0);
	for (int i = 3; i < N_MAX + 1; i += 2)
		cum[i] = is_prime(i) && is_prime((i + 1) / 2);

	rep(i, N_MAX - 1) cum[i + 1] = cum[i] + cum[i + 1];

	rep(i, q)
			cout
		<< cum[r[i]] - cum[l[i] - 1] << '\n';

	return 0;
}

// int main()
// {
// 	int q;
// 	cin >> q;
// 	vector<int> l(q), r(q);
// 	for (int i = 0; i < q; i++)
// 	{
// 		cin >> l[i] >> r[i];
// 	}
// 	vector<int> cum(1e5 + 1, 0);
// 	for (int i = 0; i < 1e5 + 1; i++)
// 	{
// 		if (is_prime(i) && is_prime((i + 1) / 2) && i % 2 == 1)
// 		{
// 			cum[i + 1] = cum[i] + 1;
// 		}
// 		else
// 		{
// 			cum[i + 1] = cum[i];
// 		}
// 	}

// 	for (int i = 0; i < q; i++)
// 	{
// 		cout << cum[r[i] + 1] - cum[l[i]] << '\n';
// 	}
// 	return 0;
// }
