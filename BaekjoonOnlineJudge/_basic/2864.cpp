#include <bits/stdc++.h>

using namespace std;

string strA;
string strB;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> strA;
    cin >> strB;

    // min
    {
        string minA = strA;
        string minB = strB;

        replace(minA.begin(), minA.end(), '6', '5');
        replace(minB.begin(), minB.end(), '6', '5');

        auto valA = atoi(minA.c_str());
        auto valB = atoi(minB.c_str());

        cout << valA + valB << ' ';
    }

    // max
    {
        string maxA = strA;
        string maxB = strB;

        replace(maxA.begin(), maxA.end(), '5', '6');
        replace(maxB.begin(), maxB.end(), '5', '6');

        auto valA = atoi(maxA.c_str());
        auto valB = atoi(maxB.c_str());

        cout << valA + valB;
    }

    return 0;
}