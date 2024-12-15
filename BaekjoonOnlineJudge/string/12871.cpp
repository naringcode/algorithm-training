#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string strA;
string strB;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> strA >> strB;

    strA += strA;
    strB += strB;

    int mx = max(strA.length(), strB.length());

    for (int i = 0; i < mx; i++)
    {
        int idxA = i % strA.length();
        int idxB = i % strB.length();

        if (strA[idxA] != strB[idxB])
        {
            cout << 0;

            return 0;
        }
    }

    cout << 1;

    return 0;
}
