#include <bits/stdc++.h>

#include <bit>

using namespace std;

constexpr int SIZE = 9;

int arr[SIZE][SIZE];

int bitRows[SIZE];
int bitCols[SIZE];
int bitRooms[SIZE];

// 헷갈리니 여기다가 적음
// Rows(가로)는 y와 매핑 / Cols(세로)는 x와 매핑

void go(int y, int x)
{
    if (SIZE == x)
    {
        x = 0;

        y++;
    }

    if (SIZE == y)
    {
        for (int y = 0; y < SIZE; y++)
        {
            for (int x = 0; x < SIZE; x++)
            {
                cout << arr[y][x] << ' ';
            }

            cout << '\n';
        }

        exit(0);
    }

    // 이미 풀었다.
    if (arr[y][x])
    {
        go(y, x + 1);

        return;
    }

    int roomY = y / 3;
    int roomX = x / 3;
    int roomIdx = roomY * 3 + roomX;

    int usable = bitRows[y] & bitCols[x] & bitRooms[roomIdx];

    if (0 == usable) // 사용할 수 있는 번호가 없다.
        return;

    for (int idx = 0; idx < SIZE; idx++)
    {
        if (usable & (1 << idx))
        {
            bitRows[y] &= ~(1 << idx);
            bitCols[x] &= ~(1 << idx);

            bitRooms[roomIdx] &= ~(1 << idx);

            arr[y][x] = idx + 1;

            go(y, x + 1);

            arr[y][x] = 0;
            
            bitRows[y] |= 1 << idx;
            bitCols[x] |= 1 << idx;

            bitRooms[roomIdx] |= 1 << idx;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 사용 가능한 모든 비트 켜기
    // 전부 같은 이진수를 나타내지만 연습삼아 해봤다
    fill(bitRows, bitRows + SIZE, (1 << SIZE) - 1);
    fill(bitCols, bitCols + SIZE, 0b1'1111'1111);
    fill(bitRooms, bitRooms + SIZE, 0b1'1111'1111);

    for (int y = 0; y < SIZE; y++)
    {
        for (int x = 0; x < SIZE; x++)
        {
            cin >> arr[y][x];

            if (arr[y][x])
            {
                int roomY = y / 3;
                int roomX = x / 3;
                int roomIdx = roomY * 3 + roomX;

                bitRows[y] &= ~(1 << (arr[y][x] - 1));
                bitCols[x] &= ~(1 << (arr[y][x] - 1));

                bitRooms[roomIdx] &= ~(1 << (arr[y][x] - 1));
            }
        }
    }

    go(0, 0);

    // cout << __builtin_popcount(bitRows[0]);
    // cout << __builtin_popcount(bitCols[0]);

    return 0;
}