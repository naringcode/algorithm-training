#include <bits/stdc++.h>

using namespace std;

string str;
int tests;

int accum;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> tests;

    for (int i = 0; i < tests; i++)
    {
        cin >> str;

        res   = 0;
        accum = 0;

        for (char ch : str)
        {
            if (ch == 'X')
            {
                accum = 0;
            }
            else
            {
                accum++;

                res += accum;
            }
        }

        cout << res << '\n';
    }

    return 0;
}
