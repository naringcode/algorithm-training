#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;
size_t pos;

int res;

int main()
{
    cin >> str;

    while (true)
    {
        pos = str.find("DKSH", pos);
        if (pos == string::npos)
            break;
        
        res++;
        pos++;
    }

    println("{}", res);
    
    return 0;
}
