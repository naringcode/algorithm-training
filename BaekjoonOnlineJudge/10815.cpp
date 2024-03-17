#include <bits/stdc++.h>

using namespace std;

bool arr[20'000'004];

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

        t += 10'000'000;

        arr[t] = 1;
    }

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;

        t += 10'000'000;

        cout << arr[t] << ' ';
    }

    return 0;
}
