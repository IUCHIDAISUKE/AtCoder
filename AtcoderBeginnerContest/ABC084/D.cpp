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

bool ck(int n)
{
	int m = (n + 1) / 2;
	for (ll i = 2; i * i < n + 1; i++)
	{
		if (n % i == 0)
			return (false);
	}
	for (ll i = 2; i * i < m + 1; i++)
	{
		if (m % i == 0)
			return (false);
	}
	return (true);
}

int main()
{
	int q;
	cin >> q;
	vector<int> l(q), r(q);
	rep(i, q) cin >> l[i] >> r[i];

	int max_n = (int)1e5;

	vector<int> tmp(max_n, 0), cumsum(max_n + 1, 0);
	for (int i = 3; i < max_n; i++)
	{
		if (i & 1)
			tmp[i] = ck(i);
	}
	rep(i, max_n) cumsum[i + 1] = cumsum[i] + tmp[i];

	rep(i, q)
			cout
		<< cumsum[r[i] + 1] - cumsum[l[i]] << "\n";

	return 0;
}

// const int MAX_N = 100010;
// vector<bool> is_prime(MAX_N, true);

// vector<bool> sieve()
// {
// 	vector<bool> is_prime(MAX_N, true);
// 	is_prime[0] = is_prime[1] = false;
// 	for (int i = 2; i * i <= MAX_N; i++)
// 	{
// 		for (int j = i * 2; j <= MAX_N; j += i)
// 			is_prime[j] = false;
// 	}
// 	return is_prime;
// }

// int main()
// {
// 	int q;
// 	cin >> q;
// 	vector<int> l(q), r(q);
// 	rep(i, q) cin >> l[i] >> r[i];

// 	vector<bool> is_prime = sieve();
// 	vector<int> cum(MAX_N + 1, 0);
// 	for (int i = 1; i < MAX_N; i++)
// 		cum[i + 1] = cum[i] + (is_prime[i] && is_prime[(i + 1) / 2]);
// 	rep(i, q)
// 			cout
// 		<< cum[r[i] + 1] - cum[l[i]] << "\n";
// 	return 0;
// }

// bool is_prime(int n)
// {
// 	if (n == 0 || n == 1)
// 		return (false);
// 	if (n % 2 == 0 && n != 2)
// 		return (false);
// 	for (int i = 3; i * i < n + 1; i += 2)
// 	{
// 		if (n % i == 0)
// 		{
// 			return (false);
// 		}
// 	}
// 	return (true);
// }

// int main()
// {
// 	int q;
// 	cin >> q;
// 	vector<int> l(q), r(q);
// 	rep(i, q) cin >> l[i] >> r[i];

// 	vector<int> cum(N_MAX, 0);
// 	for (int i = 3; i < N_MAX + 1; i += 2)
// 		cum[i] = is_prime(i) && is_prime((i + 1) / 2);

// 	rep(i, N_MAX - 1) cum[i + 1] = cum[i] + cum[i + 1];

// 	rep(i, q)
// 			cout
// 		<< cum[r[i]] - cum[l[i] - 1] << '\n';

// 	return 0;
// }

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
