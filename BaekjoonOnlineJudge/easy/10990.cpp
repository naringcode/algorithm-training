#include <bits/stdc++.h>

using namespace std;

int n;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    if (1 == n)
    {
        cout << '*';

        return 0;
    }

    for (int i = 0; i < n - 1; i++)
    {
        str += ' ';
    }

    str += "*\n";

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            str += ' ';
        }

        str += "*";

        for (int j = 0; j < (i - 1) * 2 + 1; j++)
        {
            str += ' ';
        }

        str += "*\n";
    }

    cout << str;

    return 0;
}
