#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int arrA[10];
int arrB[10];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 10; i++)
    {
        cin >> arrA[i];
    }
    
    for (int i = 0; i < 10; i++)
    {
        cin >> arrB[i];
    }

    sort(arrA, arrA + 10, greater{ });
    sort(arrB, arrB + 10, greater{ });

    cout << arrA[0] + arrA[1] + arrA[2] << " ";
    cout << arrB[0] + arrB[1] + arrB[2];

    return 0;
}
