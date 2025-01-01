#include <bits/stdc++.h>

using namespace std;

int n;
int arr[8]{ 1, 2, 3, 4, 5, 6, 7, 8 };

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    do
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << ' ';
        }

        cout << '\n';
    } while (next_permutation(arr, arr + n));
    

    return 0;
}