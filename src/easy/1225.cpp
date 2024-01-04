#include <bits/stdc++.h>

using namespace std;

string strA;
string strB;

unsigned long long res = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> strA >> strB;

    for (char elemA : strA)
    {
        unsigned long long numA = elemA - '0';

        for (char elemB : strB)
        {
            unsigned long long numB = elemB - '0';

            res += numA * numB;
        }
    }

    cout << res;

    return 0;
}
