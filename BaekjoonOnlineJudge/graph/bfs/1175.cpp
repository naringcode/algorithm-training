#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int INF = 999'999'999;

const int dy[]{ -1, 0, 1, 0 };
const int dx[]{ 0, 1, 0, -1 };

int width;
int height;

int sy;
int sx;

map<pair<int, int>, int> mpItemIdx;

char board[54][54];
int visited[3][4][54][54]; // itemIdx, dir, y, x

vector<int> cand;

int res = INF;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> height >> width;

    for (auto [y, x] : views::cartesian_product(views::iota(0, height), views::iota(0, width)))
    {
        cin >> board[y][x];

        for (int dir : views::iota(0, ssize(dy)))
        {
            visited[0][dir][y][x] = INF;
            visited[1][dir][y][x] = INF;
            visited[2][dir][y][x] = INF;
        }

        if (board[y][x] == 'S')
        {
            sy = y;
            sx = x;
        }

        if (board[y][x] == 'C')
        {
            mpItemIdx[{ y, x }] = mpItemIdx.size() + 1;
        }
    }

    // y, x, dir, itemIdx
    queue<tuple<int, int, int, int>> q;

    for (int dir : views::iota(0, ssize(dy)))
    {
        q.push({ sy, sx, 0, 0 });

        visited[0][dir][sy][sx] = 0;
    }

    bool firstTime = true;

    while (q.size() > 0)
    {
        auto [y, x, dir, itemIdx] = q.front();
        q.pop();

        int currCost = visited[itemIdx][dir][y][x];

        if (board[y][x] == 'C')
        {
            auto foundIter = mpItemIdx.find({ y, x });

            if (itemIdx == 0) // cnt : 0 -> cnt : 1
            {
                itemIdx = foundIter->second;
            }
            else if (itemIdx != foundIter->second) // cnt : 1 -> cnt : 2
            {
                cand.push_back(currCost);

                continue;
            }
        }

        for (int newDir : views::iota(0, ssize(dy)))
        {
            if (firstTime == false && dir == newDir)
                continue;

            firstTime = false;

            int ny = y + dy[newDir];
            int nx = x + dx[newDir];

            if (ny < 0 || nx < 0 || ny >= height || nx >= width)
                continue;

            if (board[ny][nx] == '#')
                continue;

            int nextCost = currCost + 1;

            if (nextCost < visited[itemIdx][newDir][ny][nx])
            {
                visited[itemIdx][newDir][ny][nx] = nextCost;

                q.push({ ny, nx, newDir, itemIdx });
            }
        }
    }

    if (cand.size() == 0)
    {
        println("-1");
    }
    else
    {
        res = *ranges::min_element(cand);

        println("{}", res);
    }

    return 0;
}
