#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

using ll = long long;

string str;

set<string> mySet;

bool res;

int main()
{
    while (true)
    {
        cin >> str;
        if (str == "*")
            break;

        res = true;

        for (int i = 0; i <= ssize(str) - 2; i++)
        {
            mySet.clear();

            for (int j = 0; j < ssize(str) - i - 1; j++)
            {
                string temp;
                temp += str[j];
                temp += str[j + i + 1];

                mySet.insert(temp);
            }

            if (mySet.size() != ssize(str) - i - 1)
            {
                res = false;

                break;
            }
        }

        if (res == true)
        {
            cout << str << " is surprising.\n";
        }
        else
        {
            cout << str << " is NOT surprising.\n";
        }
    }

    return 0;
}
