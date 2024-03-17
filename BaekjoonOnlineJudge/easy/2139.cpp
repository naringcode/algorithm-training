#include <bits/stdc++.h>

using namespace std;

int monTable[12]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int day;
int mon;
int year;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> day >> mon >> year;

        if (0 == day && 0 == mon && 0 == year)
            break;

        int res = day;

        if ((0 == year % 4 && 0 != year % 100) || 0 == year % 400)
        {
            if (mon > 2)
            {
                res++;
            }
        }

        for (int i = 0; i < mon - 1; i++)
        {
            res += monTable[i];
        }

        cout << res << '\n';
    }

    return 0;
}
