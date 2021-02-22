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

const int MAX_H = 55, MAX_W = 55, INF_I = 1001001001;
int h, w;
vector<string> maze;
int d[MAX_H][MAX_W];
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

int bfs()
{
    queue<P> que;
    rep(i, MAX_H) rep(j, MAX_W) d[i][j] = INF_I;

    que.push(P(0, 0));
    d[0][0] = 0;
    while (que.size())
    {
        P p = que.front();
        que.pop();
        if (p.first == h - 1 && p.second == w - 1)
            break;
        rep(i, 4)
        {
            int nx = p.first + dx[i], ny = p.second + dy[i];
            if (0 <= nx && nx < h && 0 <= ny && ny < w && maze[nx][ny] != '#' && d[nx][ny] == INF_I)
            {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[h - 1][w - 1];
}

int main()
{
    cin >> h >> w;
    maze = vector<string>(h);
    rep(i, h) cin >> maze[i];

    int obs = 0;
    rep(i, h)
    {
        rep(j, w)
        {
            if (maze[i][j] == '#')
                obs++;
        }
    }
    int ret = bfs();
    if (ret == INF_I)
        cout << -1 << "\n";
    else
        cout << h * w - 1 - ret - obs << "\n";
    return 0;
}