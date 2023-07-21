#include <bits/stdc++.h>

using namespace std;

// 합치고 -> 이동 / 4회 반복

int n;

vector<vector<int>> board;

int res;

void go(vector<vector<int>>& board, int cnt)
{
    if (5 == cnt)
    {
        int mx = 0;

        for (auto& vec : board)
        {
            for (auto& elem : vec)
            {
                mx = max(mx, elem);
            }
        }

        res = max(res, mx);

        return;
    }

    vector<vector<int>> nxtBoard = board;

    for (int i = 0; i < 4; i++)
    {
        for (int y = 0; y < n; y++)
        {
            for (int x = 0; x < n; x++)
            {
                nxtBoard[y][x] = board[n - x - 1][y];
            }
        }

        board = nxtBoard;

        // 합치기
        for (int y = 0; y < n; y++)
        {
            int prv  = -1;
            int curV = -1;

            for (int x = 0; x < n; x++)
            {
                if (0 == nxtBoard[y][x])
                    continue;
                    
                if (-1 == prv || curV != nxtBoard[y][x])
                {
                    prv = x;

                    curV = nxtBoard[y][x];

                    continue;
                }

                if (curV == nxtBoard[y][x])
                {
                    nxtBoard[y][prv] *= 2;
                    nxtBoard[y][x] = 0;

                    prv  = -1;
                    curV = -1;
                }
            }
        }

        // 이동
        for (int y = 0; y < n; y++)
        {
            int idx = 0;

            for (int x = 0; x < n; x++)
            {
                if (nxtBoard[y][x])
                {
                    swap(nxtBoard[y][idx], nxtBoard[y][x]);

                    idx++;
                }
            }
        }
        
        go(nxtBoard, cnt + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    board.resize(n);
    
    for (auto& vec : board)
    {
        vec.resize(n);
    }

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> board[y][x];
        }
    }

    go(board, 0);

    cout << res;

    return 0;
}