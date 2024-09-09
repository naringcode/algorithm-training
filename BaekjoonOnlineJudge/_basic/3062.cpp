#include <bits/stdc++.h>

using namespace std;

int t;

string n;

bool res;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        res = true;

        string str = n;
        reverse(str.begin(), str.end());

        int num = std::atoi(n.data()) + std::atoi(str.data());

        str = std::to_string(num);

        for (int idx = 0; idx < str.length() / 2; idx++)
        {
            if (str[idx] != str[str.length() - 1 - idx])
            {
                res = false;

                break;
            }
        }

        if (true == res)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
