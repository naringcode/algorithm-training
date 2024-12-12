#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int arr[5][5];
int y;
int x;

int player;

int res;

void go()
{
    for (int y = 1; y <= 3; y++)
    {
        if (0 == arr[y][1])
            continue;

        if (arr[y][1] == arr[y][2] && arr[y][1] == arr[y][3])
        {
            res = player;

            return;
        }
    }
    
    for (int x = 1; x <= 3; x++)
    {
        if (0 == arr[1][x])
            continue;

        if (arr[1][x] == arr[2][x] && arr[1][x] == arr[3][x])
        {
            res = player;

            return;
        }
    }

    if (arr[1][1] != 0)
    {
        if (arr[1][1] == arr[2][2] && arr[1][1] == arr[3][3])
        {
            res = player;

            return;
        }
    }

    if (arr[1][3] != 0)
    {
        if (arr[1][3] == arr[2][2] && arr[1][3] == arr[3][1])
        {
            res = player;

            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> player;

    for (int i = 0; i < 9; i++)
    {
        cin >> y >> x;

        arr[y][x] = player;

        if (res == 0)
        {
            go();
        }

        player = (player == 2) ? 1 : 2;
    }

    cout << res;

    return 0;
}
