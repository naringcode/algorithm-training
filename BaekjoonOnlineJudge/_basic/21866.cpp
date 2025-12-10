#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int hker[] { 100, 100, 200, 200, 300, 300, 400, 400, 500 };
int arr[9];

int sum;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int idx : views::iota(0, 9))
    {
        cin >> arr[idx];

        sum += arr[idx];
    }

    for (int idx : views::iota(0, 9))
    {
        if (arr[idx] > hker[idx])
        {
            println("hacker");

            return 0;
        }
    }

    if (sum < 100)
    {
        println("none");
    }
    else
    {
        println("draw");
    }

    return 0;
}
