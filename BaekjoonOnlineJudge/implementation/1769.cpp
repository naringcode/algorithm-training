#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

string str;

bool res;
int  cnt;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    while (true)
    {
        if (1 == str.length())
        {
            if ('3' == str[0] || '6' == str[0] || '9' == str[0])
            {
                res = true;
            }

            break;
        }

        cnt++;

        int temp = 0;
        for (char ch : str)
        {
            temp += ch - '0';
        }

        str = to_string(temp);
    }

    cout << cnt << '\n' << (res ? "YES" : "NO");

    return 0;
}
