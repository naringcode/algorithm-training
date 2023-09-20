#include <bits/stdc++.h>

using namespace std;

int n;
int arr[104];

int num;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if (true == arr[num])
        {
            res++;

            continue;
        }

        arr[num] = true;
    }

    cout << res;

    return 0;
}