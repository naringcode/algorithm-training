#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string strA;
string strB;

bool res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (cin >> strA)
    {
        cin >> strB;

        res = true;
    
        for (char ch : strA)
        {
            size_t idx = strB.find(ch);
    
            if (idx == string::npos)
            {
                res = false;
    
                break;
            }
    
            strB = strB.substr(idx + 1);
        }

        println("{}", res ? "Yes" : "No");
    }

    return 0;
}
