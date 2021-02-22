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

const int MAX_R = 55, MAX_C = 55;

vector<string> maze;
int INF_I = 1001001001;
int r, c;
int sx, sy, gx, gy;
int d[MAX_R][MAX_C];
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

int bfs()
{
    queue<P> que;
    rep(i, MAX_R) rep(j, MAX_C) d[i][j] = INF_I;

    que.push(P(sx, sy));
    d[sx][sy] = 0;
    while (que.size())
    {
        P p = que.front();
        que.pop();
        if (p.first == gx && p.second == gy)
            break;
        rep(i, 4)
        {
            int nx = p.first + dx[i], ny = p.second + dy[i];
            if (0 <= nx && nx < r && 0 <= ny && ny < c && maze[nx][ny] != '#' && d[nx][ny] == INF_I)
            {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[gx][gy];
}

int main()
{
    cin >> r >> c >> sx >> sy >> gx >> gy;
    sx--, sy--, gx--, gy--;
    maze = vector<string>(r);
    rep(i, r) cin >> maze[i];

    int ans = bfs();
    cout << ans << "\n";

    return 0;
}