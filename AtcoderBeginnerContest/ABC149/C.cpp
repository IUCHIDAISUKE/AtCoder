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
    int x;
    cin >> x;
    while (1)
    {
        bool prime = true;
        for (int i = 2; i * i < x + 1; i++)
        {
            if (x % i == 0)
                prime = false;
        }
        if (prime)
            break;
        x++;
    }
    cout << x << "\n";
    return 0;
}

// bool is_prime(int x)
// {
//     // if (x <= 1)
//     //     return false;
//     for (int i = 2; i * i <= x; i++)
//     {
//         if (!(x % i))
//             return false;
//     }
//     return true;
// }

// int main()
// {
//     int x;
//     cin >> x;

//     while (1)
//     {
//         if (is_prime(x))
//         {
//             cout << x << '\n';
//             return 0;
//         }
//         x++;
//     }

//     return 0;
// }
