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

const int MAX_H = 1050, MAX_W = 1050;
vector<string> maze;
int INF_I = 1001001001;
int h, w, n;
vector<P> station;
int d[MAX_H][MAX_W];
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

int bfs(int cur)
{
    queue<P> que;
    rep(i, MAX_H) rep(j, MAX_W) d[i][j] = INF_I;

    int sx = station[cur].first, sy = station[cur].second, gx = station[cur + 1].first, gy = station[cur + 1].second;

    que.push(station[cur]);
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
            if (0 <= nx && nx < h && 0 <= ny && ny < w && maze[nx][ny] != 'X' && d[nx][ny] == INF_I)
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
    cin >> h >> w >> n;
    maze = vector<string>(h);
    rep(i, h) cin >> maze[i];
    rep(i, h)
    {
        rep(j, w)
        {
            if (maze[i][j] == 'S')
                station.push_back(P(i, j));
        }
    }

    rep(i, n)
    {
        rep(j, h)
        {
            rep(k, w)
            {
                if (maze[j][k] == i + 1 + '0')
                    station.push_back(P(j, k));
            }
        }
    }

    int ans = 0;
    rep(i, n) ans += bfs(i);

    cout << ans << "\n";
    return 0;
}