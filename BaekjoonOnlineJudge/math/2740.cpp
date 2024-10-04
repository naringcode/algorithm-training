#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

int rowA;
int colA;

int rowB;
int colB;

int matA[104][104];
int matB[104][104];

int matRes[104][104];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> rowA >> colA;

    for (int y = 0; y < rowA; y++)
    {
        for (int x = 0; x < colA; x++)
        {
            cin >> matA[y][x];
        }
    }
    
    cin >> rowB >> colB;

    for (int y = 0; y < rowB; y++)
    {
        for (int x = 0; x < colB; x++)
        {
            cin >> matB[y][x];
        }
    }

    for (int y = 0; y < rowA; y++)
    {
        for (int x = 0; x < colB; x++)
        {
            for (int idx = 0; idx < colA; idx++)
            {
                matRes[y][x] += matA[y][idx] * matB[idx][x];
            }
        }
    }

    for (int y = 0; y < rowA; y++)
    {
        for (int x = 0; x < colB; x++)
        {
            cout << matRes[y][x] << ' ';
        }

        cout << '\n';
    }

    return 0;
}
