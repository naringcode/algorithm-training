#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int arrA[4];
int arrB[2];

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> arrA[0] >> arrA[1] >> arrA[2] >> arrA[3] >> arrB[0] >> arrB[1];

    sort(arrA, arrA + 4, greater{ });
    sort(arrB, arrB + 2, greater{ });

    cout << (arrA[0] + arrA[1] + arrA[2] + arrB[0]);

    return 0;
}
