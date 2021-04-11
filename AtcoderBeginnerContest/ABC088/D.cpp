#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

using namespace std;
using ll = long long int;
using P = pair<int, int>;

const ll INF_L = 1LL << 60;
const int INF_I = 1 << 30;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

const int H_MAX = 50, W_MAX = 50;
int h, w;
vector<string> atlas;

int d[H_MAX + 1][W_MAX + 1];

void bfs()
{
    memset(d, -1, sizeof(d));
    queue<P> que;
    que.push(P(0, 0));
    d[0][0] = 0;
    while (que.size())
    {
        P p = que.front();
        que.pop();
        rep(i, 4)
        {
            int nx = p.first + dx[i], ny = p.second + dy[i];
            if (0 <= nx && nx < h && 0 <= ny && ny < w && d[nx][ny] == -1 && atlas[nx][ny] != '#')
            {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
}

int main()
{
    cin >> h >> w;
    atlas = vector<string>(h);
    rep(i, h) cin >> atlas[i];

    int ans = h * w;
    rep(i, h) rep(j, w) if (atlas[i][j] == '#') ans--;
    bfs();
    if (d[h - 1][w - 1] == -1)
        cout << -1 << "\n";
    else
        cout << ans - d[h - 1][w - 1] - 1 << "\n";
    return 0;
}

// int bfs()
// {
//     queue<P> que;
//     rep(i, MAX_H) rep(j, MAX_W) d[i][j] = INF_I;

//     que.push(P(0, 0));
//     d[0][0] = 0;
//     while (que.size())
//     {
//         P p = que.front();
//         que.pop();
//         if (p.first == h - 1 && p.second == w - 1)
//             break;
//         rep(i, 4)
//         {
//             int nx = p.first + dx[i], ny = p.second + dy[i];
//             if (0 <= nx && nx < h && 0 <= ny && ny < w && maze[nx][ny] != '#' && d[nx][ny] == INF_I)
//             {
//                 que.push(P(nx, ny));
//                 d[nx][ny] = d[p.first][p.second] + 1;
//             }
//         }
//     }
//     return d[h - 1][w - 1];
// }

// int main()
// {
//     cin >> h >> w;
//     maze = vector<string>(h);
//     rep(i, h) cin >> maze[i];

//     int obs = 0;
//     rep(i, h)
//     {
//         rep(j, w)
//         {
//             if (maze[i][j] == '#')
//                 obs++;
//         }
//     }
//     int ret = bfs();
//     if (ret == INF_I)
//         cout << -1 << "\n";
//     else
//         cout << h * w - 1 - ret - obs << "\n";
//     return 0;
// }