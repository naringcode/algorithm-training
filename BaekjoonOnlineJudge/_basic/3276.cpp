#include <bits/stdc++.h>

using namespace std;

int n;

int resRow = 999'999;
int resCol = 999'999;

void go(int sizeCol)
{
    if (0 == sizeCol)
        return;

    int row = n / sizeCol;

    if (0 != n % sizeCol)
    {
        row++;
    }

    if (sizeCol + row < resRow + resCol)
    {
        resRow = row;
        resCol = sizeCol;
    }

    go(sizeCol - 1);
}

int main()
{
    cin >> n;

    go(n);

    cout << resRow << ' ' << resCol;
    
    return 0;
}
