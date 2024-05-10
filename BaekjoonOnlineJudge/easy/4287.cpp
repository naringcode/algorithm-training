#include <bits/stdc++.h>

using namespace std;

string strA, strB, strC, strD;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> strA;

        if ("#" == strA)
            break;

        cin >> strB >> strC;

        strD.clear();

        for (int idx = 0; idx < strA.length(); idx++)
        {
            int chA = strA[idx] - 'a';
            int chB = strB[idx] - 'a';
            int chC = strC[idx] - 'a';

            int newCh = ((chB - chA) + chC + 26) % 26;

            strD.push_back('a' + newCh);
        }

        cout << strA << ' ' << strB << ' ' << strC << ' ' << strD << '\n';
    }

    return 0;
}
