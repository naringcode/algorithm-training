#include <bits/stdc++.h>

using namespace std;

constexpr int MAX = 1'000'001;

int arr[MAX];

int t;
int n;

void eratos()
{
    fill(arr, arr + MAX, 1);

    arr[0] = 0;
    arr[1] = 0;

    for (int i = 2; i < MAX; i++)
    {
        if (0 == arr[i])
            continue;

        for (int j = 2 * i; j < MAX; j += i)
        {
            arr[j] = 0;
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

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        int cnt = 0;

        for (int j = 2; j <= n / 2; j++)
        {
            if (2 == arr[j] + arr[n - j])
            {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}
