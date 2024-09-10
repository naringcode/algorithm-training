#include <bits/stdc++.h>

using namespace std;

int arrA[14];
int arrB[14];

int scoreA;
int scoreB;

char lastWin = 'X';

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 10; i++)
    {
        cin >> arrA[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cin >> arrB[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (arrA[i] > arrB[i])
        {
            scoreA += 3;

            lastWin = 'A';
        }
        else if (arrA[i] < arrB[i])
        {
            scoreB += 3;

            lastWin = 'B';
        }
        else
        {
            scoreA++;
            scoreB++;
        }
    }

    cout << scoreA << ' ' << scoreB << '\n';
    
    if (scoreA > scoreB)
    {
        cout << 'A';
    }
    else if (scoreA < scoreB)
    {
        cout << 'B';
    }
    else if ('X' != lastWin)
    {
        cout << lastWin;
    }
    else
    {
        cout << 'D';
    }

    return 0;
}
