#include <iostream>
#include <algorithm>

using namespace std;

string str;

int cnt;

int main()
{
    cin >> str;

    for (char elem : str)
    {
        if ('(' == elem)
        {
            cnt++;
        }
        else if (')' == elem)
        {
            if (0 == cnt)
            {
                cnt = 999;

                break;
            }

            cnt--;
        }
    }

    if (0 == cnt)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }  

    return 0;
}
