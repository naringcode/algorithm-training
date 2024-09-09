#include <bits/stdc++.h>

using namespace std;

string str;

int arr[14];

int mxVal;
int mxIdx;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (char elem : str)
    {
        arr[elem - '0']++;
    }

    mxVal = arr[0];

    for (int i = 1; i < 10; i++)
    {
        if (mxVal <= arr[i])
        {
            mxVal = arr[i];

            mxIdx = i;
        }
    }

    cout << mxIdx;

    return 0;
}
