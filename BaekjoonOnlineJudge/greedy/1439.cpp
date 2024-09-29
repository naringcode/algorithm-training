#include <bits/stdc++.h>

using namespace std;

string str;

int res;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> str;

    for (int idx = 0; idx < str.size() - 1; idx++)
    {
        if (str[idx] != str[idx + 1])
        {
            res++;
        }
    }

    if (1 == res % 2)
    {
        res++;
    }

    cout << res / 2;

    return 0;
}
