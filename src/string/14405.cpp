#include <bits/stdc++.h>

using namespace std;

string str;
int    len;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    string build;

    for (char ch : str)
    {
        build += ch;

        if ("pi" == build)
        {
            len += 2;
            
            build.clear();
        }
        else if ("ka" == build)
        {
            len += 2;

            build.clear();
        }
        else if ("chu" == build)
        {
            len += 3;

            build.clear();
        }
    }

    if ("pi" == build)
    {
        len += 2;
    }
    else if ("ka" == build)
    {
        len += 2;
    }
    else if ("chu" == build)
    {
        len += 3;
    }

    if (str.length() == len)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}