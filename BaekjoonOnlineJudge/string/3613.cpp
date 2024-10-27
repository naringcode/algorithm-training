#include <bits/stdc++.h>

using namespace std;

// using ll = long long;

string str;
string res;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    // 검증
    if ('_' == str[0] || '_' == str.back() || isupper(str[0]))
    {
        cout << "Error!";

        return 0;
    }

    if (auto iter = find_if(str.begin(), str.end(), [](char ch) { return isupper(ch); });
        string::npos != str.find('_') && iter != str.end())
    {
        cout << "Error!";

        return 0;
    }

    for (int i = 0; i < str.size() - 1; i++)
    {
        if ('_' == str[i] && '_' == str[i + 1])
        {
            cout << "Error!";

            return 0;
        }
    }

    // go
    if (string::npos != str.find('_'))
    {
        // C++ -> JAVA
        for (int i = 0; i < str.size(); i++)
        {
            // 추가
            if ('_' == str[i])
            {
                i++;

                res += (str[i] - ('a' - 'A'));
            }
            else
            {
                res += str[i];
            }
        }
    }
    else
    {
        // JAVA -> C++
        for (int i = 0; i < str.size(); i++)
        {
            // 추가
            if (isupper(str[i]))
            {
                res += '_';
                res += str[i] + ('a' - 'A');
            }
            else
            {
                res += str[i];
            }
        }
    }

    cout << res;

    return 0;
}
