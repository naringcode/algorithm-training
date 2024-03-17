#include <bits/stdc++.h>

using namespace std;

const int board[4][30] =
{
    { 10000, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 0, }, // 시작
    { 10, 13, 16, 19, 25, 30, 35, 0, }, // 10번
    { 20, 22, 24, 0, }, // 20번
    { 30, 28, 27, 26, 0, } // 30번
};

int visited[4][30];

int arr[10];

// y, x
pair<int, int> posArr[4] = { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } };

int res;

pair<int, int> nextPos(pair<int, int>& pos, int amount)
{
    pair<int, int> ret;

    ret.first  = pos.first;
    ret.second = pos.second + amount;

    if (0 == ret.first)
    {
        if (5 == ret.second)
        {
            ret.first  = 1;
            ret.second = 0;
        }
        else if (10 == ret.second)
        {
            ret.first  = 2;
            ret.second = 0;
        }
        else if (15 == ret.second)
        {
            ret.first  = 3;
            ret.second = 0;
        }
    }
    else if (1 == ret.first)
    {
        if (7 <= ret.second)
        {
            ret.first  = 0;
            ret.second += 13;
        }
    }
    else if (2 == ret.first)
    {
        if (6 <= ret.second)
        {
            ret.first  = 0;
            ret.second += 14;
        }
        else if (3 <= ret.second)
        {
            ret.first  = 1;
            ret.second += 1;
        }
    }
    else if (3 == ret.first)
    {
        if (7 <= ret.second)
        {
            ret.first  = 0;
            ret.second += 13;
        }
        else if (4 <= ret.second)
        {
            ret.first = 1;
        }
    }

    return ret;
}

// 모든 경우의 수 탐색
void dfs(int depth, int sum)
{
    if (10 == depth)
    {
        res = max(res, sum);

        return;
    }

    for (int idx = 0; idx < 4; idx++)
    {
        auto prvPos = posArr[idx];

        // 끝 지점에 도착한 말은 안 움직여도 된다.
        if (board[prvPos.first][prvPos.second] == 0)
            continue;

        auto nxtPos = nextPos(prvPos, arr[depth]);

        // 이동할 위치에 어떤 말이 사전에 이동한 상태
        if (visited[nxtPos.first][nxtPos.second])
            continue;

        // 도착 지점에 대한 방문은 처리하지 않게
        if (0 != board[nxtPos.first][nxtPos.second])
        {
            visited[nxtPos.first][nxtPos.second] = 1;
        }

        // 이전 위치 비우기
        visited[prvPos.first][prvPos.second] = 0;

        posArr[idx] = nxtPos;

        // 탐색
        dfs(depth + 1, sum + board[nxtPos.first][nxtPos.second]);

        // 해당 주사위 번호를 다른 말이 사용할 수 있게 복원
        posArr[idx] = prvPos;

        if (0 != board[prvPos.first][prvPos.second])
        {
            visited[prvPos.first][prvPos.second] = 1;
        }

        visited[nxtPos.first][nxtPos.second] = 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    dfs(0, 0);

    cout << res;

    return 0;
}