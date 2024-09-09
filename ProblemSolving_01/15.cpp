#include <bits/stdc++.h>

using namespace std;

int n;
bool arr[200'004];

void go()
{
    fill(arr, arr + 200'004, true);

    arr[0] = false;
    arr[1] = false;

    for (int i = 2; i * i <= 200'000; i++)
    {
        if (true == arr[i])
        {
            for (int j = i * 2; j <= 200'000; j += i)
            {
                arr[j] = false;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    go();

    cin >> n;

    int res = 0;
    for (int i = 0; i <= n; i++)
    {
        if (true == arr[i])
        {
            res++;
        }
    }

    cout << res;

    return 0;
}
