#include <bits/stdc++.h>

using namespace std;

int n;
int m;

vector<pair<int, int>> vec1;
vector<pair<int, int>> vec2;

vector<int> distVec;
vector<int> stk;

int res = 999'999'999;

void go(int idx)
{
    if (stk.size() == m) // 경우의 수 찾음
    {
        fill(distVec.begin(), distVec.end(), 999'999'999);

        for (int i = 0; i < vec1.size(); i++)
        {
            for (auto elem : stk)
            {
                distVec[i] = min(distVec[i], abs(vec2[elem].first - vec1[i].first) + abs(vec2[elem].second - vec1[i].second));
            }
        }

        // for (auto elem : stk)
        // {
        //     cout << elem << ' ';
        // }
        //
        // cout << '\n';

        res = min(res, accumulate(distVec.begin(), distVec.end(), 0));

        return;
    }

    if (vec2.size() == idx) // 더 이상 찾을 수 없음
        return;

    while (idx < vec2.size())
    {
        stk.push_back(idx);

        go(idx + 1);

        stk.pop_back();

        idx++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            int id;

            cin >> id;

            if (1 == id)
            {
                vec1.push_back({ y, x });
            }
            else if (2 == id)
            {
                vec2.push_back({ y, x });
            }
        }
    }

    distVec.resize(vec1.size());

    go(0);

    cout << res;

    return 0;
}
