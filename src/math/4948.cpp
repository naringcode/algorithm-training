#include <bits/stdc++.h>

using namespace std;

constexpr int MAX = 250'000;

int arr[MAX];

int n;

void eratos()
{
    memset(arr, 1, sizeof(arr));

    for (int i = 2; i < MAX; i++)
    {
        if (false == arr[i])
            continue;

        for (int j = 2 * i; j < MAX; j += i)
        {
            arr[j] = false;
        }
    }
}

// bool IsPrime(int num)
// {
//     if (1 >= num)
//         return false;

//     if (2 == num)
//         return true;

//     if (0 == num % 2)
//         return false;

//     for (int i = 3; i * i <= num; i++)
//     {
//         if (0 == num % i)
//             return false;
//     }

//     return true;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    eratos();

    while (true)
    {
        cin >> n;

        if (0 == n)
            break;

        int cnt = 0;

        for (int i = n + 1; i <= 2 * n; i++)
        {
            if (arr[i])
            {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}
