#include <bits/stdc++.h>

using namespace std;

int h;
int w;

char arr[104][104];
int  res[104][104];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> h >> w;

    for (int y = 0; y < h; y++)
    {
        for (int x = 0; x < w; x++)
        {
            cin >> arr[y][x];

            if ('c' == arr[y][x])
            {
                res[y][x] = 0;
            }
            else
            {
                res[y][x] = -1;
            }
        }
    }

    for (int y = 0; y < h; y++)
    {
        for (int x = 0; x < w; x++)
        {
            if ('.' == arr[y][x])
                continue;

            int nx = x + 1;

            while (0 != res[y][nx] && nx < w)
            {
                res[y][nx] = res[y][nx - 1] + 1;

                nx++;
            }
        }
    }

    for (int y = 0; y < h; y++)
    {
        for (int x = 0; x < w; x++)
        {
            cout << res[y][x] << ' ';
        }

        cout << '\n';
    }
    
    return 0;
}
