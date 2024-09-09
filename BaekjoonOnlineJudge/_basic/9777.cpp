#include <bits/stdc++.h>

using namespace std;

int arr[12];

int code;
int day;
int month;
int year;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    
    cin >> t;

    while (t--)
    {
        char ch;

        cin >> code >> day >> ch >> month >> ch >> year;

        arr[month - 1]++;
    }

    for (int i = 0; i < 12; i++)
    {
        cout << i + 1 << ' ' << arr[i] << '\n';
    }

    return 0;
}
