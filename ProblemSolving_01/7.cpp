#include <iostream>
#include <algorithm>

using namespace std;

string str;
string res;

int main()
{
    getline(cin, str);

    for (char elem : str)
    {
        if (' ' == elem)
            continue;

        res.push_back(elem);
    }

    transform(res.begin(), res.end(), res.begin(), [](char elem)
    {
        if (elem >= 'A' && elem <= 'Z')
            elem += 'a' - 'A';

        return elem;
    });

    cout << res;
    
    return 0;
}
