#include <bits/stdc++.h>

using namespace std;

int n;

int arr[10'004];
int res[10'004];

int main()
{
    cin >> n;

    for (int i : views::iota(0, n))
    {
        cin >> arr[i];
    }

    for (int i : views::iota(0, n))
    {
        for (int j : views::iota(0, i))
        {
            if (arr[i] <= arr[j])
            {
                res[i]++;
            }
        }
    }

    for (int i : views::iota(0, n))
    {
        print("{} ", res[i] + 1);
    }

    return 0;
}
