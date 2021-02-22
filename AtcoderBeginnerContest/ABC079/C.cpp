#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);

int main()
{
	string s;
	cin >> s;

	int n = s.size();
	for (int bit = 0; bit < (1 << (n - 1)); bit++)
	{
		int res = s[0] - '0';
		char op[3];
		rep(i, n - 1)
		{
			if (bit & (1 << i))
			{
				res += s[i + 1] - '0';
				op[i] = '+';
			}
			else
			{
				res -= s[i + 1] - '0';
				op[i] = '-';
			}
		}
		if (res == 7)
		{
			rep(i, 3) cout << s[i] << op[i];
			cout << s[3] << "=7"
				 << "\n";
			return 0;
		}
	}
	return 0;
}
// int main()
// {
// 	string s;
// 	cin >> s;
// 	vector<int> v(4);
// 	vector<char> op(3);
// 	for (int i = 0; i < 4; i++)
// 	{
// 		v[i] = s[i] - '0';
// 	}

// 	int ans = 0;
// 	for (int bit = 0; bit < (1 << 3); bit++)
// 	{
// 		int ans = v[0];
// 		for (int i = 0; i < 3; i++)
// 		{
// 			if (bit & (1 << i))
// 			{
// 				ans += v[i + 1];
// 				op[i] = '+';
// 			}
// 			else
// 			{
// 				ans -= v[i + 1];
// 				op[i] = '-';
// 			}
// 		}
// 		if (ans == 7)
// 		{
// 			cout << v[0];
// 			for (int i = 0; i < 3; i++)
// 			{
// 				cout << op[i] << v[i + 1];
// 			}
// 			cout << "=7" << '\n';
// 			return 0;
// 		}
// 	}
// 	return 0;
// }
