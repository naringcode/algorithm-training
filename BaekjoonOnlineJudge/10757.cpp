#include <iostream>
#include <string>

using namespace std;

string numStrA, numStrB;
string res;

int lenA, lenB;
bool incChk;

int maxLen;

int main()
{
    cin >> numStrA >> numStrB;

    lenA = numStrA.length();
    lenB = numStrB.length();

    maxLen = std::max(lenA, lenB);

    int i;
    for (i = 0; i < lenA && i < lenB; i++)
    {
        int temp = numStrA[lenA - i - 1] - '0' + numStrB[lenB - i - 1] - '0';

        if (true == incChk)
        {
            temp++;
        }

        if (temp >= 10)
        {
            incChk = true;

            temp -= 10;
        }
        else
        {
            incChk = false;
        }

        res.insert(res.begin(), temp + '0');
    }

    if (i < lenA)
    {
        for (; i < lenA; i++)
        {
            int temp = numStrA[lenA - i - 1] - '0';

            if (true == incChk)
            {
                temp++;
            }

            if (temp >= 10)
            {
                incChk = true;

                temp -= 10;
            }
            else
            {
                incChk = false;
            }

            res.insert(res.begin(), temp + '0');
        }
    }
    else if (i < lenB)
    {
        for (; i < lenB; i++)
        {
            int temp = numStrB[lenB - i - 1] - '0';

            if (true == incChk)
            {
                temp++;
            }

            if (temp >= 10)
            {
                incChk = true;

                temp -= 10;
            }
            else
            {
                incChk = false;
            }

            res.insert(res.begin(), temp + '0');
        }
    }

    if (true == incChk)
    {
        res.insert(res.begin(), '1');
    }

    cout << res;

    return 0;
}
