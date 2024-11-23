#include <bits/stdc++.h>

using namespace std;

int n;

int arrA[54];
int arrB[54];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arrB[i];
    }

    sort(arrA, arrA + n);
    sort(arrB, arrB + n, greater{ });

    for (int i = 0; i < n; i++)
    {
        res += arrA[i] * arrB[i];
    }

    cout << res;

    return 0;
}