#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int lx;
int ly;
int hx;
int hy;

bool arr[104][104];
int  cnt;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 4; i++)
    {
        cin >> lx >> ly >> hx >> hy;

        for (int y = ly; y < hy; y++)
        {
            for (int x = lx; x < hx; x++)
            {
                if (false == arr[y][x])
                {
                    arr[y][x] = true;

                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}
