#include <bits/stdc++.h>

using namespace std;

int k;
string str;

string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> k >> str;

    for (int i = 0; i < k; i++) // col
    {
        for (int j = 0; j < str.length() / k; j++) // row
        {
            char ch;

            if (0 == j % 2)
            {
                ch = str[j * k + i];
            }
            else // (1 == j % 2)
            {
                ch = str[j * k + (k - i - 1)];
            }

            res.push_back(ch);
        }
    }

    cout << res;
    
    return 0;
}
