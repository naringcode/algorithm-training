#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string str;
bool   found;

void go(int idx)
{
    if (idx == str.size())
        return;

    int sumA = 1;
    int sumB = 1;

    for (int i = 0; i < idx; i++)
    {
        sumA *= str[i] - '0';
    }

    for (int i = idx; i < str.size(); i++)
    {
        sumB *= str[i] - '0';
    }

    if (sumA == sumB)
    {
        found = true;

        return;
    }
    else
    {
        go(idx + 1);
    }
}

int main()
{
    cin >> str;

    go(1);

    if (true == found)
    {
        cout << "YES";
    }
    else // if (false == found)
    {
        cout << "NO";
    }

    return 0;
}
