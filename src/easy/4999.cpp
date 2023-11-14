#include <bits/stdc++.h>

using namespace std;

string strA;
string strB;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> strA >> strB;

    if (strA.length() < strB.length())
    {
        cout << "no";
    }
    else
    {
        cout << "go";
    }

    return 0;
}
