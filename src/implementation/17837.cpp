#include <bits/stdc++.h>

using namespace std;

struct Mal
{
    int id;

    int y;
    int x;

    int dir;
};

const int dy[4] = { 0, 0, -1, 1 };
const int dx[4] = { 1, -1, 0, 0 };

int n;
int k;

int arr[16][16];

Mal mal[14];
vector<Mal*> malMap[16][16];

bool flag;
int res = -1;

int change_dir(int dir)
{
    int temp = dir / 2;

    dir = (dir + 1) % 2;

    return dir + temp * 2;
}

void go()
{
    int idx = -1;

    for (auto& elem : mal)
    {
        idx++;

        if (k == idx)
            break;

        int ny = elem.y + dy[elem.dir];
        int nx = elem.x + dx[elem.dir];

        // 밖 or 파란
        if (ny < 0 || nx < 0 || ny >= n || nx >= n ||
            2 == arr[ny][nx])
        {
            elem.dir = change_dir(elem.dir);

            ny = elem.y + dy[elem.dir];
            nx = elem.x + dx[elem.dir];

            // 가만히
            if (ny < 0 || nx < 0 || ny >= n || nx >= n ||
                2 == arr[ny][nx])
                continue;
        }
        
        vector<Mal*> tempIdle;
        vector<Mal*> tempMove;

        for (auto& extract : malMap[elem.y][elem.x]) // 추출
        {
            if (tempMove.size() || extract->id == elem.id)
            {
                tempMove.push_back(extract);
            }
            else
            {
                tempIdle.push_back(extract);
            }
        }

        int prevY = elem.y;
        int prevX = elem.x;

        if (0 == arr[ny][nx]) // 흰
        {
            elem.y = ny;
            elem.x = nx;
        }
        else if (1 == arr[ny][nx]) // 빨간
        {
            elem.y = ny;
            elem.x = nx;

            reverse(tempMove.begin(), tempMove.end());
        }

        malMap[prevY][prevX] = tempIdle;

        for (auto& moveMal : tempMove)
        {
            (*moveMal).y = elem.y;
            (*moveMal).x = elem.x;

            malMap[elem.y][elem.x].push_back(moveMal);
        }

        if (4 <= malMap[elem.y][elem.x].size())
        {
            flag = true;

            return;
        }
    }
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);

    cin >> n >> k;
    
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> arr[y][x];
        }
    }

    for (int i = 0; i < k; i++)
    {
        mal[i].id = i;

        cin >> mal[i].y >> mal[i].x >> mal[i].dir;

        mal[i].y--;
        mal[i].x--;
        mal[i].dir--;

        malMap[mal[i].y][mal[i].x].push_back(&mal[i]);
    }

    for (int i = 1; i <= 1000; i++)
    {
        go();
        
        // for (int y = 0; y < n; y++)
        // {
        //     for (int x = 0; x < n; x++)
        //     {
        //         cout << malMap[y][x].size() << ' ';
        //     }
        
        //     cout << '\n';
        // }
        
        // cout << i << '\n';
        
        if (true == flag)
        {
            res = i;

            break;
        }
    }

    cout << res;

    return 0;
}