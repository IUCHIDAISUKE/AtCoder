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

int h = 10, w = 10;

bool ok;
vector<string> board;
vector<vector<bool>> done;

void dfs(int x, int y)
{
    if (x < 0 || h <= x || y < 0 || w <= y)
        return;
    if (board[x][y] == 'x' && life)
    {
        life = 0;
        dfs(x + 1, y);
        dfs(x, y + 1);
        dfs(x - 1, y);
        dfs(x, y - 1);
    }
    if (board[x][y] == 'x')
        return;
}

int main()
{
    board = vector<string>(h);
    rep(i, h) cin >> board[i];

    int sx, sy;
    rep(i, h)
    {
        rep(j, w)
        {
            if (c
                    [i][j] == 'o')
            {
                sx = i,
                sy = j;
            }
        }
    }

    life = 1;
    dfs(sx, sy);
    cout << (ok ? "Yes" : "No") << "\n";
    return 0;
}