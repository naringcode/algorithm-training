#include <bits/stdc++.h>

using namespace std;

int arr[2][10];

int sumA;
int sumB;

char lastWin = 'D';

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int y = 0; y < 2; y++)
    {
        for (int x = 0; x < 10; x++)
        {
            cin >> arr[y][x];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        int a = arr[0][i];
        int b = arr[1][i];

        if (a > b)
        {
            sumA += 3;

            lastWin = 'A';
        }
        else if (a < b)
        {
            sumB += 3;

            lastWin = 'B';
        }
        else
        {
            sumA++;
            sumB++;
        }
    }

    cout << sumA << ' ' << sumB << '\n';
    cout << (sumA > sumB ? 'A' : (sumA < sumB) ? 'B' : lastWin) << '\n';

    return 0;
}
