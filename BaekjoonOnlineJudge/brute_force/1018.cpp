#include <bits/stdc++.h>

using namespace std;

int  n, m;
char board[54][54];

int res = 99999; // inf

int switch_ch(char ch)
{
    return ch == 'B' ? 'W' : 'B';
}

int recur_find_x(int y, int x, int cnt, char ch)
{
    if (8 == cnt)
        return 0;

    int temp = board[y][x] != ch;

    return temp + recur_find_x(y, x + 1, cnt + 1, switch_ch(ch));
}

int recur_find_y(int y, int x, int cnt, char ch)
{
    if (8 == cnt)
        return 0;

    int temp = recur_find_x(y, x, 0, ch);

    return temp + recur_find_y(y + 1, x, cnt + 1, switch_ch(ch));
}

int entry(int y, int x)
{
    return std::min(recur_find_y(y, x, 0, 'B'), recur_find_y(y, x, 0, 'W'));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            cin >> board[y][x];
        }
    }

    for (int y = 0; y < n - 7; y++)
    {
        for (int x = 0; x < m - 7; x++)
        {
            res = std::min(res, entry(y, x));
        }
    }

    cout << res;

    // cout << '\n';

    // for (int y = 0; y < n; y++)
    // {
    //     for (int x = 0; x < m; x++)
    //     {
    //         cout << board[y][x];
    //     }

    //     cout << '\n';
    // }
    
    return 0;
}