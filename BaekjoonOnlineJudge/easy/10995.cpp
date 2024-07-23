#include <bits/stdc++.h>

using namespace std;

int n;

string str;
string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        str += "* ";
    }

    str += '\n';

    for (int i = 0; i < n; i++)
    {
        if (0 == i % 2)
        {
            res += str;
        }
        else
        {
            res += " ";
            res += str;
        }
    }

    cout << res;

    return 0;
}
