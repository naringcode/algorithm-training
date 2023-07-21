#include <bits/stdc++.h>

using namespace std;

const int dy[4] = { 1, 0, -1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int arr[54][54];
int arrT[54][54];

int n;
int m;

int k;

int r[7];
int c[7];
int s[7];

vector<int> permu;

int res = 999'999'999;

void go(int cnt)
{
    if (cnt == k)
    {
        for (int y = 0; y < n; y++)
        {
            int sum = 0;

            for (int x = 0; x < m; x++)
            {
                sum += arrT[y][x];
            }

            res = min(res, sum);
        }

        return;
    }

    for (int i = 1; i <= s[permu[cnt]]; i++)
    {
        int y = r[permu[cnt]] - i;
        int x = c[permu[cnt]] - i;

        int l = x;
        int t = y;
        int r = x + i * 2;
        int b = y + i * 2;

        int prvTemp = arrT[t][l];

        int idx = 0;

        while (idx < 4)
        {
            int ny = y + dy[idx];
            int nx = x + dx[idx];

            if (ny < t || nx < l || ny > b || nx > r)
            {
                idx++;

                continue;
            }

            arrT[y][x] = arrT[ny][nx];

            y = ny;
            x = nx;
        }

        arrT[t][l + 1] = prvTemp;
    }

    // cout << '\n';

    // for (int y = 0; y < n; y++)
    // {
    //     for (int x = 0; x < m; x++)
    //     {
    //         cout << arrT[y][x] << ' ';
    //     }

    //     cout << '\n';
    // }

    go(cnt + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> k;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            cin >> arr[y][x];
        }
    }

    for (int i = 0; i < k; i++)
    {
        cin >> r[i] >> c[i] >> s[i];

        r[i]--;
        c[i]--;
        
        permu.push_back(i);
    }

    do
    {
        memcpy(arrT, arr, sizeof(arrT));

        go(0);

    } while (next_permutation(permu.begin(), permu.end()));
    

    cout << res;

    return 0;
}