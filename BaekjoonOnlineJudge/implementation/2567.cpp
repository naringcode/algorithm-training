#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
vector<pair<int, int>> vec;

int arr[104][104];
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        int x;
        int y;
        cin >> x >> y;

        vec.push_back({ x, y });
    }

    for (auto [x, y] : vec)
    {
        for (int ny = y; ny < y + 10; ny++)
        {
            for (int nx = x; nx < x + 10; nx++)
            {
                arr[ny][nx]++;
            }
        }
    }

    for (int y = 0; y <= 100; y++)
    {
        for (int x = 0; x <= 100; x++)
        {
            if (arr[y][x] == 0)
                continue;

            constexpr std::array<pair<int, int>, 4> delta{{
                { 1, 0 }, { 0, 1 }, { -1, 0 }, { 0, -1 }
            }};

            for (auto [dy, dx] : delta)
            {
                int ny = y + dy;
                int nx = x + dx;

                if (ny < 0 || nx < 0 || ny >= 100 || ny >= 100 || arr[ny][nx] == 0)
                {
                    res++;
                }
            }
        }
    }

    println("{}", res);

    return 0;
}
