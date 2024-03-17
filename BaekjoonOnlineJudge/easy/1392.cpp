#include <bits/stdc++.h>

using namespace std;

int n;
int q;

int temp;

int arr[100'004];
int idx;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;

        for (int j = 0; j < temp; j++)
        {
            arr[idx] = i + 1;

            idx++;
        }
    }

    // for (int i = 0; i < idx; i++)
    // {
    //     cout << arr[i] << ' ';
    // }

    for (int i = 0; i < q; i++)
    {
        cin >> n;

        cout << arr[n] << '\n';
    }

    return 0;
}