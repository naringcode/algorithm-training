#include <bits/stdc++.h>

using namespace std;

int n;

int arrA[104];
int arrB[104];

map<int, int> mp;

int main()
{
    cin >> n;

    for (auto idx : views::iota(0, n))
    {
        cin >> arrA[idx];

        arrB[idx] = arrA[idx];
    }

    ranges::sort(arrA, arrA + n, greater{ });

    for (auto idx : views::iota(0, n))
    {
        if (mp[arrA[idx]] != 0)
            continue;

        mp[arrA[idx]] = idx + 1;
    }

    for (auto idx : views::iota(0, n))
    {
        print("{} ", mp[arrB[idx]]);
    }

    return 0;
}
