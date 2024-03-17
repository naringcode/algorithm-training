#include <bits/stdc++.h>

using namespace std;

int arr[10];
int a;

int resArr[10];
int resIdx;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 10; i++)
    {
        cin >> a;

        arr[i] = a % 42;
    }

    resArr[0] = arr[0];
    resIdx = 1;

    for (int i = 1; i < 10; i++)
    {
        for (a = 0; a < resIdx; a++)
        {
            if (arr[i] == resArr[a])
                break;
        }

        if (a == resIdx)
        {
            resArr[resIdx] = arr[i];
            resIdx++;
        }
    }

    cout << resIdx;

    return 0;
}
