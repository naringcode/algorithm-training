#include <bits/stdc++.h>

using namespace std;

const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int t;

int h;
int w;

string str;

char arr[104][104];
bool visited[104][104];

vector<pair<int, int>> enterPos;
bool keys[26];

vector<pair<int, int>> preservePos[26];

int res;

void go()
{
    queue<pair<int, int>> q;

    int y;
    int x;

    for (auto& pair : enterPos)
    {
        tie(y, x) = pair;

        if ('A' <= arr[y][x] && arr[y][x] <= 'Z') // 문
        {
            preservePos[arr[y][x] - 'A'].push_back(pair);
        }
        else
        {
            visited[y][x] = true;

            q.push(pair);
        }
    }

    do
    {
        int size = q.size();

        for (int i = 0; i < size; i++)
        {
            tie(y, x) = q.front();

            q.pop();
            
            if ('$' == arr[y][x]) // 목표
            {
                res++;
            }
            else if ('a' <= arr[y][x] && arr[y][x] <= 'z') // 열쇠
            {
                keys[arr[y][x] - 'a'] = true;
            }

            for (int dir = 0; dir < 4; dir++)
            {
                int ny = y + dy[dir];
                int nx = x + dx[dir];

                if (ny < 0 || nx < 0 || ny >= h || nx >= w)
                    continue;

                if ('*' == arr[ny][nx])
                    continue;

                if (visited[ny][nx])
                    continue;

                visited[ny][nx] = true;

                if ('A' <= arr[ny][nx] && arr[ny][nx] <= 'Z') // 문
                {
                    preservePos[arr[ny][nx] - 'A'].push_back({ ny, nx });

                    continue;
                }

                q.push({ ny, nx });
            }
        }

        // 열쇠로 열 수 있으면
        for (int idx = 0; idx < 26; idx++)
        {
            if (false == keys[idx])
                continue;

            while (preservePos[idx].size())
            {
                q.push(preservePos[idx].back());

                preservePos[idx].pop_back();
            }
        }

    } while (q.size());
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> h >> w;

        res = 0;

        enterPos.clear();

        memset(visited, 0, sizeof(visited));

        memset(keys, 0, sizeof(keys));

        for (int i = 0; i < 26; i++)
        {
            preservePos[i].clear();
        }

        for (int y = 0; y < h; y++)
        {
            for (int x = 0; x < w; x++)
            {
                cin >> arr[y][x];
            }
        }

        for (int y = 0; y < h; y++)
        {
            if ('*' != arr[y][0])
            {
                enterPos.push_back({ y, 0 });
            }

            if ('*' != arr[y][w - 1])
            {
                enterPos.push_back({ y, w - 1 });
            }
        }

        for (int x = 1; x < w - 1; x++)
        {
            if ('*' != arr[0][x])
            {
                enterPos.push_back({ 0, x });
            }

            if ('*' != arr[h - 1][x])
            {
                enterPos.push_back({ h - 1, x });
            }
        }

        cin >> str;

        if ("0" != str)
        {
            for (char ch : str)
            {
                keys[ch - 'a'] = true;
            }
        }

        go();

        cout << res << '\n';
    }

    return 0;
}