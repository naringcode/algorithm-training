#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string startStr;
string str;

int currX;
int currY;

set<string> mySet;

bool flag = true;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> startStr;

    mySet.insert(startStr);

    currX = startStr[0] - 'A';
    currY = startStr[1] - '0';

    while (cin >> str)
    {
        if (flag == false)
            continue;

        if (mySet.contains(str) == true)
        {
            flag = false;

            continue;
        }

        mySet.insert(str);

        int nextX = str[0] - 'A';
        int nextY = str[1] - '0';

        int diffX = nextX - currX;
        int diffY = nextY - currY;

        if (abs(diffX) == 1 && abs(diffY) == 2)
        {
            currX = nextX;
            currY = nextY;

            continue;
        }
        else if (abs(diffX) == 2 && abs(diffY) == 1)
        {
            currX = nextX;
            currY = nextY;

            continue;
        }

        flag = false;
    }

    int diffX = (str[0] - 'A') - (startStr[0] - 'A');
    int diffY = (str[1] - '0') - (startStr[1] - '0');

    if (abs(diffX) == 1 && abs(diffY) == 2)
    {
        // Do nothing
    }
    else if (abs(diffX) == 2 && abs(diffY) == 1)
    {
        // Do nothing
    }
    else
    {
        flag = false;
    }

    if (flag == true)
    {
        println("Valid");
    }
    else
    {
        println("Invalid");
    }

    return 0;
}
