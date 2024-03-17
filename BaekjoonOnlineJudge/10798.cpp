#include <bits/stdc++.h>

using namespace std;

char mat[10][19];

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int y = 0; y < 5; y++)
    {
        cin >> str;

        for (int x = 0; x < str.length(); x++)
        {
            mat[y][x] = str[x];
        }
    }

    for (int x = 0; x < 15; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            if (0 != mat[y][x])
            {
                cout << mat[y][x];
            }
        }
    }
    
    return 0;
}
