#include <bits/stdc++.h>

using namespace std;

int n;

string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    if (0 == n)
    {
        res += '1';
    }
    else if (1 == n)
    {
        res += '0';
    }
    else
    {
        // min num
        if (1 == n % 2)
        {
            res += '4';
        }

        for (int cnt = 0; cnt < n / 2; cnt++)
        {
            res += '8';
        }
    }

    cout << res;

    return 0;
}
