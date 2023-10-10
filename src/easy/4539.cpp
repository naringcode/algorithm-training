#include <bits/stdc++.h>

using namespace std;

int t;

int a;
int b;

int digit;
int val;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int tt = 0; tt < t; tt++)
    {
        cin >> val;

        digit = 10;

        while (val > digit)
        {
            a = digit / 2;
            b = val % digit;

            val -= b;

            // 올림
            if (a <= b)
            {
                val += digit;
            }

            digit *= 10;
        }

        cout << val << '\n';
    }

    return 0;
}