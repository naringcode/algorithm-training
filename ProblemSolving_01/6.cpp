#include <iostream>

using namespace std;

string str;

int num;
int res;

int main()
{
    cin >> str;

    for (char elem : str)
    {
        if (elem >= '0' && elem <= '9')
        {
            num *= 10;
            num += elem - '0';
        }
    }

    cout << num << '\n';

    for (int i = 1; i <= num; i++)
    {
        if (0 == num % i)
        {
            res++;
        }
    }

    cout << res;
    
    return 0;
}
