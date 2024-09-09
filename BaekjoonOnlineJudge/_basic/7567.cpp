#include <bits/stdc++.h>

using namespace std;

string str;
char ch = '-';

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (char elem : str)
    {
        if (elem != ch)
        {
            ch = elem;

            res += 10;
        }
        else
        {
            res += 5;
        }
    }

    cout << res;

    return 0;
}
