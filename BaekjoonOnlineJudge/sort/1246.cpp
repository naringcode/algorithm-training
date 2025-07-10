#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

int arr[1004];

int resA;
int resB;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i : views::iota(0, m))
    {
        cin >> arr[i];
    }

    ranges::sort(arr, greater{ });

    for (int idx : views::iota(0, min(n, m)))
    {
        int val = arr[idx] * (idx + 1);

        if (resB <= val)
        {
            resA = arr[idx];
            resB = val;
        }
    }

    println("{} {}", resA, resB);
    
    return 0;
}
