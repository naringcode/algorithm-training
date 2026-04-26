#include <bits/stdc++.h>

using namespace std;

bool board[100][100];

constexpr int WIDTH  = 10;
constexpr int HEIGHT = 10;

int n, x, y;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;

        for (int i = 0; i < HEIGHT; i++)
        {
            for (int j = 0; j < WIDTH; j++)
            {
                board[i + y][j + x] = true;
            }
        }
    }

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (board[i][j])
            {
                res++;
            }
        }
    }

    cout << res;

    return 0;
}
