#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;

int arr[3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int i : views::iota(0, t))
    {
        cin >> arr[0] >> arr[1] >> arr[2];

        ranges::sort(arr);

        if (arr[0] + arr[1] > arr[2])
        {
            if (arr[0] == arr[1] && arr[1] == arr[2])
            {
                println("Case #{}: equilateral", i + 1);
            }
            else if (arr[0] == arr[1] || arr[1] == arr[2])
            {
                println("Case #{}: isosceles", i + 1);
            }
            else
            {
                println("Case #{}: scalene", i + 1);
            }
        }
        else
        {
            println("Case #{}: invalid!", i + 1);
        }
    }

    return 0;
}
