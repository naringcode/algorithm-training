#include <bits/stdc++.h>

using namespace std;

string strA;
string strB;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    getline(cin, strA);
    getline(cin, strB);

    for (int idx = 0; idx < strA.length(); idx++)
    {
        if (' ' == strA[idx])
            continue;

        strA[idx] = strA[idx] - (strB[idx % strB.length()] - 'a' + 1);  

        if (strA[idx] < 'a')
        {
            strA[idx] += 26;
        }
    }

    cout << strA;
    
    return 0;
}
