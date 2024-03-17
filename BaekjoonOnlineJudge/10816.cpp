#include <bits/stdc++.h>

using namespace std;

int arr[20'000'004];

int n;
int t;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;

        arr[t + 10'000'000]++;
    }

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;

        cout << arr[t + 10'000'000] << ' ' ;
    }

    return 0;
}
