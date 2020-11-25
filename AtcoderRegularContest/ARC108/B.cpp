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
    string s;
    cin >> n >> s;
    vector<char> stack;
    rep(i, n)
    {
        stack.push_back(s[i]);
        if (s[i] == 'x')
        {
            int num = stack.size();
            if (num >= 3 && stack[num - 1] == 'x' && stack[num - 2] == 'o' && stack[num - 3] == 'f')
                stack.erase(stack.end() - 3, stack.end());
        }
    }
    cout << stack.size() << '\n';
    return 0;
}
