#include <bits/stdc++.h>

using namespace std;

int arr[10];

int res = 999'999;

void go(int sum, int idx)
{
    if (10 == idx)
        return;

    sum += arr[idx];

    int temp = sum - 100;

    if (abs(res) == abs(temp))
    {
        res = max(res, temp);
    }
    else if (abs(res) > abs(temp))
    {
        res = temp;
    }

    go(sum, idx + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    go(0, 0);

    cout << 100 + res;

    return 0;
}
