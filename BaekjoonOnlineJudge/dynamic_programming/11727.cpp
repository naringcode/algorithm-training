#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll arr[1004];
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    arr[1] = 1;
    arr[2] = 3;

    for (int i = 3; i <= 1000; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2] * 2;
        arr[i] %= 10007;
    }

    cin >> n;

    cout << arr[n];

    return 0;
}
