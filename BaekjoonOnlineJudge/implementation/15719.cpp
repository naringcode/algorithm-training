#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int arr[10'000'004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        arr[temp]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1 || arr[i] == 0)
            continue;

        cout << i;

        return 0;
    }

    return 0;
}
