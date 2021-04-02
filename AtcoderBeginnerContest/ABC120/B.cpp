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
	int a, b, k;
	cin >> a >> b >> k;

	for (int i = min(a, b); i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
			k--;
		if (k == 0)
		{
			cout << i << "\n";
			return 0;
		}
	}
	return 0;
}