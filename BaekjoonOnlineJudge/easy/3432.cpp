#include <bits/stdc++.h>

using namespace std;

int t;

char arr[5][5];

vector<vector<pair<int, int>>> winVec;

void init()
{
    vector<pair<int, int>> vec;

    // 1행
    vec.push_back({ 0, 0 });
    vec.push_back({ 0, 1 });
    vec.push_back({ 0, 2 });
    
    winVec.push_back(vec);
    vec.clear();

    // 2행
    vec.push_back({ 1, 0 });
    vec.push_back({ 1, 1 });
    vec.push_back({ 1, 2 });
    
    winVec.push_back(vec);
    vec.clear();

    // 3행
    vec.push_back({ 2, 0 });
    vec.push_back({ 2, 1 });
    vec.push_back({ 2, 2 });
    
    winVec.push_back(vec);
    vec.clear();

    // 1열
    vec.push_back({ 0, 0 });
    vec.push_back({ 1, 0 });
    vec.push_back({ 2, 0 });
    
    winVec.push_back(vec);
    vec.clear();

    // 2열
    vec.push_back({ 0, 1 });
    vec.push_back({ 1, 1 });
    vec.push_back({ 2, 1 });
    
    winVec.push_back(vec);
    vec.clear();

    // 3열
    vec.push_back({ 0, 2 });
    vec.push_back({ 1, 2 });
    vec.push_back({ 2, 2 });
    
    winVec.push_back(vec);
    vec.clear();

    // 대각 오른쪽 -> 하단
    vec.push_back({ 0, 0 });
    vec.push_back({ 1, 1 });
    vec.push_back({ 2, 2 });
    
    winVec.push_back(vec);
    vec.clear();

    // 대각 오른쪽 -> 상단
    vec.push_back({ 2, 0 });
    vec.push_back({ 1, 1 });
    vec.push_back({ 0, 2 });
    
    winVec.push_back(vec);
    vec.clear();
}

bool check_win(char ch)
{
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            for (vector<pair<int, int>>& vec : winVec)
            {
                int cnt = 0;

                for (auto& pair : vec)
                {
                    int ny = y + pair.first;
                    int nx = x + pair.second;

                    if (ch == arr[ny][nx])
                    {
                        cnt++;
                    }
                }

                if (3 == cnt)
                    return true;
            }
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ::init();

    cin >> t;

    for (int tt = 0; tt < t; tt++)
    {
        for (int y = 0; y < 5; y++)
        {
            for (int x = 0; x < 5; x++)
            {
                cin >> arr[y][x];
            }
        }       

        bool aChk = ::check_win('A');
        bool bChk = ::check_win('B');

        if (aChk == bChk)
        {
            cout << "draw\n";
        }
        else if (true == aChk)
        {
            cout << "A wins\n";
        }
        else if (true == bChk)
        {
            cout << "B wins\n";
        }
    }

    return 0;
}