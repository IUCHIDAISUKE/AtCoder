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

const int MAX_H = 550, MAX_W = 550, INF_I = 1001001001;
int h, w, sx, sy, gx, gy;
deque<P> deq;
vector<string> maze;
int d[MAX_H][MAX_W];
int dx[] = {1, 0, -1, 0}, dy[] = {0, -1, 0, 1};

int bfs()
{
    deque<P> deq;
    deq.push_back(P(sx, sy));
    rep(i, MAX_H) rep(j, MAX_W) d[i][j] = INF_I;
    d[sx][sy] = 0;

    while (deq.size())
    {
        P de = deq.front();
        deq.pop_front();
        if (de.first == gx && de.second == gy)
            break;
        rep(i, 4)
        {
            int nx = de.first + dx[i], ny = de.second + dy[i];
            if (nx < 0 || h <= nx || ny < 0 || w <= ny || d[nx][ny] != INF_I)
                continue;
            if (maze[nx][ny] == '#')
            {
                deq.push_back(P(nx, ny));
                d[nx][ny] = d[de.first][de.second] + 1;
            }
            else if (maze[nx][ny] != '#')
            {
                deq.push_front(P(nx, ny));
                d[nx][ny] = d[de.first][de.second];
            }
        }
    }
    return d[gx][gy];
}

int main()
{
    cin >> h >> w;
    maze = vector<string>(h);
    rep(i, h) cin >> maze[i];

    rep(i, h)
    {
        rep(j, w)
        {
            if (maze[i][j] == 's')
                sx = i, sy = j;
            if (maze[i][j] == 'g')
                gx = i, gy = j;
        }
    }

    int ans = bfs();

    cout << ((ans < 3) ? "YES" : "NO") << "\n";
    return 0;
}