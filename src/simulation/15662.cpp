#include <bits/stdc++.h>

using namespace std;

int t;
int k;

int a;
int b;

vector<char> vec[1004];
bool visited[1004];

int res;

void go(int idx, int cw)
{
    if (visited[idx])
        return;

    visited[idx] = true;

    if (idx + 1 < t && vec[idx][2] != vec[idx + 1][6])
    {
        go(idx + 1, -cw);
    }

    if (idx - 1 >= 0 && vec[idx][6] != vec[idx - 1][2])
    {
        go(idx - 1, -cw);
    }

    if (1 == cw)
    {
        // 시계
        rotate(vec[idx].rbegin(), vec[idx].rbegin() + 1, vec[idx].rend());

        // cout << idx << " - cw / ";
    }
    else
    {
        // 반시계
        rotate(vec[idx].begin(), vec[idx].begin() + 1, vec[idx].end());

        // cout << idx << " - ccw / ";
    }
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        vec[i].resize(8);

        for (auto& elem : vec[i])
        {
            cin >> elem;
        }
    }

    cin >> k;

    for (int i = 0; i < k; i++)
    {
        memset(visited, 0, sizeof(visited));

        cin >> a >> b;

        a--;

        go(a, b);

        // cout << '\n';

        // for (int i = 0; i < t; i++)
        // {
        //     for (auto& elem : vec[i])
        //     {
        //         cout << elem;
        //     }

        //     cout << '\n';
        // }
    }

    for (int i = 0; i < t; i++)
    {
        if ('1' == vec[i][0])
        {
            res++;
        }
    }

    cout << res;

    return 0;
}