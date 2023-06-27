#include <bits/stdc++.h>

using namespace std;

char arr[64][64];

int n;

void quad(int y, int x, int size)
{
    if (1 == size)
    {
        cout << arr[y][x];

        return;
    }

    char ch = arr[y][x];

    for (int sy = 0; sy < size; sy++)
    {
        for (int sx = 0; sx < size; sx++)
        {
            if (ch != arr[y + sy][x + sx])
            {
                cout << '(';

                size /= 2;

                quad(y, x, size);
                quad(y, x + size, size);
                quad(y + size, x, size);
                quad(y + size, x + size, size);

                cout << ')';

                return;
            }
        }
    }

    cout << ch;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> arr[y][x];
        }
    }

    quad(0, 0, n);

    return 0;
}