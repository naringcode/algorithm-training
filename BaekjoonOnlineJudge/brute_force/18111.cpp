#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;
int arr[504][504];

int b;

int resTick = numeric_limits<int>::max();
int resHeight;

pair<int, int> minMaxHeight()
{
    int minTemp = numeric_limits<int>::max();
    int maxTemp = numeric_limits<int>::min();

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            minTemp = min(minTemp, arr[y][x]);
            maxTemp = max(maxTemp, arr[y][x]);
        }
    }

    return { minTemp, maxTemp };
}

void go(int tick)
{
    auto [minH, maxH] = minMaxHeight();

    if (minH == maxH)
    {
        if (resTick > tick)
        {
            resTick   = tick;
            resHeight = maxH;
        }
        else if (resTick == tick)
        {
            resHeight = max(resHeight, maxH);
        }

        return;
    }

    // 올리기(높이 맞추기)
    int bubbling = 0;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            bubbling += max(0, maxH - arr[y][x]);
        }
    }

    if (b >= bubbling)
    {
        if (resTick > bubbling + tick)
        {
            resTick   = bubbling + tick;
            resHeight = maxH;
        }
        else if (resTick == bubbling + tick)
        {
            resHeight = max(resHeight, maxH);
        }
    }

    // 삽질(높이 낮추기)
    int digging = 0;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            if (arr[y][x] == maxH)
            {
                digging++;

                arr[y][x]--;
                b++;
            }
        }
    }

    go(tick + digging * 2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> b;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            cin >> arr[y][x];
        }
    }

    auto [minH, maxH] = minMaxHeight();

    go(0);

    cout << resTick << ' ' << resHeight;

    return 0;
}
