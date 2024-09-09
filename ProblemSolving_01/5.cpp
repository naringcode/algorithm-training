#include <iostream>

using namespace std;

string str;

int main()
{
    cin >> str;

    if ('1' == str[7])
    {
        int num = 1900;
        num += (str[0] - '0') * 10;
        num += (str[1] - '0');

        cout << 2019 - num + 1 << " M";
    }
    else if ('2' == str[7])
    {
        int num = 1900;
        num += (str[0] - '0') * 10;
        num += (str[1] - '0');

        cout << 2019 - num + 1 << " W";
    }
    else if ('3' == str[7])
    {
        int num = 2000;
        num += (str[0] - '0') * 10;
        num += (str[1] - '0');

        cout << 2019 - num + 1 << " M";
    }
    else if ('4' == str[7])
    {
        int num = 2000;
        num += (str[0] - '0') * 10;
        num += (str[1] - '0');

        cout << 2019 - num + 1 << " W";
    }
    
    return 0;
}
