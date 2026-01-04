#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int dy[]{ -1, 0, 1, 0 };
const int dx[]{ 0, 1, 0, -1 };

int currDir = 2;

int currX;
int currY;

int minX;
int minY;

int maxX;
int maxY;

int w;
int h;

int n;
string str;

char board[54][54];

vector<pair<int, int>> mvVec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> str;

    for (char ch : str)
    {
        if (ch == 'L')
        {
            currDir = ((currDir + 4) - 1) % 4;
        }
        else if (ch == 'R')
        {
            currDir = (currDir + 1) % 4;
        }
        else // if (ch == 'F')
        {
            mvVec.push_back({ -dy[currDir], -dx[currDir] });

            currX += dx[currDir];
            currY += dy[currDir];

            minX = min(minX, currX);
            minY = min(minY, currY);
            
            maxX = max(maxX, currX);
            maxY = max(maxY, currY);
        }
    }

    // info
    w = maxX - minX + 1;
    h = maxY - minY + 1;

    currX -= minX;
    currY -= minY;

    // clear
    for (auto [y, x] : views::cartesian_product(views::iota(0, h), views::iota(0, w)))
    {
        board[y][x] = '#';
    }

    // update
    board[currY][currX] = '.';

    for (auto [mvY, mvX] : mvVec | views::reverse)
    {
        currX += mvX;
        currY += mvY;

        board[currY][currX] = '.';
    }

    // draw
    for (auto y : views::iota(0, h))
    {
        for (auto x : views::iota(0, w))
        {
            print("{}", board[y][x]);
        }

        println("");
    }

    return 0;
}
