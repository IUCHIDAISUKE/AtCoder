#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

const int MAX_H = 500 + 10;
const int MAX_W = 500 + 10;

int h, w;
char maze[MAX_H][MAX_W];
bool ck[MAX_H][MAX_W];

int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};
int s[2], g[2];

bool ok;

void dfs(int x, int y)
{
    if (maze[x][y] == 'g')
    {
        ok = true;
    }
    if (maze[x][y] == '#')
        return;
    if (x < 0 || h <= x || y < 0 || w <= y)
        return;
    if (ck[x][y])
        return;
    ck[x][y] = true;
    rep(i, 4)
    {
        dfs(x + dx[i], y + dy[i]);
    }
}

int main()
{
    cin >> h >> w;
    rep(i, h) rep(j, w) cin >> maze[i][j];

    rep(i, h)
    {
        rep(j, w)
        {
            if (maze[i][j] == 's')
            {
                s[0] = i;
                s[1] = j;
            }
            if (maze[i][j] == 'g')
            {
                g[0] = i;
                g[1] = j;
            }
        }
    }

    dfs(s[0], s[1]);

    cout << (ok ? "Yes" : "No") << '\n';
    return 0;
}
