#include <iostream>

using namespace std;

using ll = long long;

ll arr[94];

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    arr[1] = 1;
    for (int idx = 2; idx <= 90; idx++)
    {
        arr[idx] = arr[idx - 1] + arr[idx - 2];
    }

    cin >> n;

    cout << arr[n];

    return 0;
}
