#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string kingPos;
string stonePos;
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> kingPos >> stonePos >> n;

    for (int i : views::iota(0, n))
    {
        string temp;
        cin >> temp;

        int kingX = kingPos[0] - 'A';
        int kingY = kingPos[1] - '1';

        int stoneX = stonePos[0] - 'A';
        int stoneY = stonePos[1] - '1';

        int dirX = 0;
        int dirY = 0;

        if (temp.contains('R'))
        {
            dirX++;
        }

        if (temp.contains('L'))
        {
            dirX--;
        }

        if (temp.contains('T'))
        {
            dirY++;
        }

        if (temp.contains('B'))
        {
            dirY--;
        }

        kingX += dirX;
        kingY += dirY;

        if (kingX == stoneX && kingY == stoneY)
        {
            stoneX += dirX;
            stoneY += dirY;
        }

        if ((kingX >= 0 && kingX < 8 && kingY >= 0 && kingY < 8) &&
            (stoneX >= 0 && stoneX < 8 && stoneY >= 0 && stoneY < 8))
        {
            kingPos[0] = kingX + 'A';
            kingPos[1] = kingY + '1';
            
            stonePos[0] = stoneX + 'A';
            stonePos[1] = stoneY + '1';
        }
    }

    println("{}", kingPos);
    println("{}", stonePos);

    return 0;
}
