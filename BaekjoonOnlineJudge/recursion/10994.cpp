#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

list<string> myList;

void go(int val)
{
    if (val == 0)
        return;
        
    size_t len = myList.front().length();

    for (string& elem : myList)
    {
        string str = " ";
        str += elem;
        str += ' ';

        elem = str;
    }

    string strA(len + 2, '*');
    string strB(len + 2, ' ');

    myList.push_front(strB);
    myList.push_front(strA);
    
    myList.push_back(strB);
    myList.push_back(strA);

    for (string& elem : myList)
    {
        string str = "*";
        str += elem;
        str += '*';

        elem = str;
    }

    go(val - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    myList.push_back("*");

    go(n - 1);

    for (const string& elem : myList)
    {
        println("{}", elem);
    }

    return 0;
}
