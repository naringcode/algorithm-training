#include <iostream>

using namespace std;

int lines[3];

int main()
{
    cin >> lines[0] >> lines[1] >> lines[2];

    int idx = 0;
    int sum = 0;

    for (int i = 1; i < 3; i++)
    {
        if (lines[i] > lines[idx])
        {
            idx = i;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (idx != i)
        {
            sum += lines[i];
        }
    }

    if (lines[idx] >= sum)
    {
        sum = sum * 2 - 1;
    }
    else
    {
        sum += lines[idx];
    }

    cout << sum;

    return 0;
}
