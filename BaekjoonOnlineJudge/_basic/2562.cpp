#include <bits/stdc++.h>

using namespace std;

int inTemp;

int maxVal;
int maxIdx;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> maxVal;
    
    maxIdx = 1;
    
    for (int i = 1; i < 9; i++)
    {
        cin >> inTemp;

        if (maxVal < inTemp)
        {
            maxVal = inTemp;
            maxIdx = i + 1;
        }
    }

    cout << maxVal << '\n' << maxIdx;

    return 0;
}
