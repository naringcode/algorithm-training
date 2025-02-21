#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int board[28][28];
vector<int> phases;

bool chk[28][28];

void mark(int phase)
{
    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            if (phase == board[y][x])
            {
                chk[y][x] = true;

                return;
            }
        }
    }
}

int go()
{
    int ret = 0;

    // 가로
    for (int y = 0; y < 5; y++)
    {
        int sum = 0;

        for (int x = 0; x < 5; x++)
        {
            sum += (int)chk[y][x];
        }

        if (sum == 5)
        {
            ret++;
        }
    }

    // 세로
    for (int x = 0; x < 5; x++)
    {
        int sum = 0;

        for (int y = 0; y < 5; y++)
        {
            sum += (int)chk[y][x];
        }

        if (sum == 5)
        {
            ret++;
        }
    }

    // 대각선
    int diag1 = 0;
    int diag2 = 0;

    for (int i = 0; i < 5; i++)
    {
        diag1 += (int)chk[i][i];
        diag2 += (int)chk[i][(5 - 1) - i];
    }

    if (diag1 == 5)
    {
        ret++;
    }
    
    if (diag2 == 5)
    {
        ret++;
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            cin >> board[y][x];
        }
    }

    for (int i = 0; i < 25; i++)
    {
        int temp;
        cin >> temp;

        phases.push_back(temp);
    }

    for (int idx = 0; idx < 25; idx++)
    {
        mark(phases[idx]);

        // cout << (idx + 1) << " : " << phases[idx] << ' ' << go() << '\n';
        // 
        // for (int y = 0; y < 5; y++)
        // {
        //     for (int x = 0; x < 5; x++)
        //     {
        //         cout << (int)chk[y][x] << ' ';
        //     }
        // 
        //     cout << '\n';
        // }
        // 
        // cout << '\n';

        if (go() >= 3)
        {
            std::cout << (idx + 1);
        
            return 0;
        }
    }

    return 0;
}