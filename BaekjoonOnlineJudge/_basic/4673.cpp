#include <bits/stdc++.h>

using namespace std;

bool arr[20'004];

void go(int n)
{
    while (n <= 10'000)
    {
        int temp = n;

        while (n > 0)
        {
            temp += n % 10;

            n /= 10;
        }

        n = temp;

        arr[n] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    fill(arr, arr + 20'004, true);

    for (int i = 1; i <= 10'000; i++)
    {
        if (true == arr[i])
        {
            go(i);
        }
    }

    for (int i = 1; i <= 10'000; i++)
    {
        if (true == arr[i])
        {
            cout << i << '\n';
        }
    }

    return 0;
}
