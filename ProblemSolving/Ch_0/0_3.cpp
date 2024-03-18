#include <bits/stdc++.h>

using namespace std;

int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

void right_rotate(int arr[], int start, int dest)
{
    int temp = arr[dest];

    while (start < dest)
    {
        arr[dest] = arr[dest - 1];

        dest--;
    }

    arr[start] = temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    right_rotate(arr, 2, 6);

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}
