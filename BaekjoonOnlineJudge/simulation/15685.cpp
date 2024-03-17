#include <bits/stdc++.h>

using namespace std;

// 1. 시작점
// 2. 시작 방향
// 3. 세대

// 반시계 방향으로 회전하는 경우는 없다.
// 어떻게 붙일 것인지 생각

const int dy[4] = { 0, -1, 0, 1 };
const int dx[4] = { 1, 0, -1, 0 };

vector<vector<int>> dragon[4];

int n;

int x;
int y;
int d;
int g;

bool arr[104][104];

int res;

void init()
{
    for (int i = 0; i < 4; i++)
    {
        // 0 gene
        dragon[i].push_back({ i });

        // 1 gene
        dragon[i].push_back({ (dragon[i][0][0] + 1) % 4 });

        // 2 ~ 10 gene
        for (int j = 2; j <= 10; j++)
        {
            vector<int> newG;

            vector<int> temp = dragon[i][j - 1];
            vector<int> tempR = temp;

            reverse(tempR.begin(), tempR.end());

            for (int& elem : tempR)
            {
                elem = (elem + 1) % 4;

                newG.push_back(elem);
            }

            for (int& elem : temp)
            {
                newG.push_back(elem);
            }

            dragon[i].push_back(newG);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    init();

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> d >> g;

        arr[y][x] = true;

        for (int j = 0; j <= g; j++)
        {
            for (int& dir : dragon[d][j])
            {
                y += dy[dir];
                x += dx[dir];

                arr[y][x] = true;
            }
        }
    }

    for (int y = 0; y <= 100; y++)
    {
        for (int x = 0; x <= 100; x++)
        {
            if (arr[y][x] && arr[y][x + 1] && arr[y + 1][x] && arr[y + 1][x + 1])
            {
                res++;
            }
        }
    }

    cout << res;

    return 0;
}