#include <bits/stdc++.h>

using namespace std;

// 경사로는 위에서 -> 아래로 놓는 게 구현하기 편할 것 같다.
//
// 상하 순회 / 좌우 순회

int n;
int l;

int arr[104][104];
int visited[2][104][104]; // 다리 놓는 용도

int res;

bool walk_hori(int row)
{
    int x = 0;
    int currH = arr[row][x];

    while (true)
    {
        int nxtX = x + 1;
        if (nxtX >= n)
            break;

        // 그냥 건널 수 있음
        int nxtH = arr[row][nxtX];
        if (nxtH == currH)
        {
            x++;

            continue;
        }

        // 높이 차이가 1을 넘으면 건너지 못 한다
        if (abs(nxtH - currH) > 1)
            return false;

        // 내려가는 경우
        if (1 == currH - nxtH)
        {
            visited[0][row][nxtX] = 1;

            for (int i = 2; i <= l; i++)
            {
                if (x + i >= n)
                    return false;
                
                nxtX = x + i;
                nxtH = arr[row][nxtX];

                visited[0][row][nxtX] = 1;

                if (1 != currH - nxtH) // 높이가 다르다
                    return false;
            }

            x += l;
            currH = arr[row][x];
        }
        // 올라가는 경우
        else // if (1 == nxtH - currH)
        {
            if (1 == visited[0][row][x])
                return false;

            x++; // 올라가서 판단하는 게 편함
            currH = arr[row][x];

            for (int i = 2; i <= l; i++)
            {
                if (x - i < 0)
                    return false;
                    
                nxtX = x - i;
                nxtH = arr[row][nxtX];
                
                if (1 == visited[0][row][nxtX])
                    return false;

                if (1 != currH - nxtH) // 높이가 다르다
                    return false;
            }
        }
    }

    return true;
}

bool walk_vert(int col)
{
    int y = 0;
    int currH = arr[y][col];

    while (true)
    {
        int nxtY = y + 1;
        if (nxtY >= n)
            break;

        // 그냥 건널 수 있음
        int nxtH = arr[nxtY][col];
        if (nxtH == currH)
        {
            y++;

            continue;
        }

        // 높이 차이가 1을 넘으면 건너지 못 한다
        if (abs(nxtH - currH) > 1)
            return false;

        // 내려가는 경우
        if (1 == currH - nxtH)
        {
            visited[1][nxtY][col] = 1;

            for (int i = 2; i <= l; i++)
            {
                if (y + i >= n)
                    return false;
                
                nxtY = y + i;
                nxtH = arr[nxtY][col];

                visited[1][nxtY][col] = 1;

                if (1 != currH - nxtH) // 높이가 다르다
                    return false;
            }

            y += l;
            currH = arr[nxtY][col];
        }
        // 올라가는 경우
        else // if (1 == nxtH - currH)
        {
            if (1 == visited[1][y][col])
                return false;

            y++; // 올라가서 판단하는 게 편함
            currH = arr[nxtY][col];

            for (int i = 2; i <= l; i++)
            {
                if (y - i < 0)
                    return false;
                    
                nxtY = y - i;
                nxtH = arr[nxtY][col];

                if (1 == visited[1][nxtY][col])
                    return false;

                if (1 != currH - nxtH) // 높이가 다르다
                    return false;
            }
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> l;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> arr[y][x];
        }
    }

    for (int y = 0; y < n; y++)
    {
        if (true == walk_vert(y))
        {
            res++;
        }
    }

    for (int x = 0; x < n; x++)
    {
        if (true == walk_hori(x))
        {
            res++;
        }
    }

    cout << res;

    return 0;
}