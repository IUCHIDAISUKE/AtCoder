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

const int MAX_H = 1010, MAX_W = 1010, INF_I = 1001001001;
int h, w;
vector<string> maze;
queue<P> que;
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
int tmp[MAX_H][MAX_W];
int d[MAX_H][MAX_W];

int bfs()
{
    int ans = 0;
    while (que.size())
    {
        P p = que.front();
        que.pop();
        rep(i, 4)
        {
            int nx = p.first + dx[i], ny = p.second + dy[i];
            if (0 <= nx && nx < h && 0 <= ny && ny < w && maze[nx][ny] != '#' && d[nx][ny] == INF_I)
            {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
                ans = max(ans, d[nx][ny]);
            }
        }
    }
    return ans;
}

int main()
{
    cin >> h >> w;
    maze = vector<string>(h);
    rep(i, h) cin >> maze[i];
    rep(i, MAX_H) rep(j, MAX_W) d[i][j] = INF_I;

    vector<P> dark;
    rep(i, h)
    {
        rep(j, w)
        {
            if (maze[i][j] == '#')
            {
                que.push(P(i, j));
                d[i][j] = 0;
            }
        }
    }

    int ans = bfs();
    cout << ans << "\n";
    return 0;
}