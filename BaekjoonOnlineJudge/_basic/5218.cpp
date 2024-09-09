#include <bits/stdc++.h>

using namespace std;

int n;

string strA;
string strB;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> strA >> strB;

        cout << "Distances: ";

        for (int idx = 0; idx < strA.length(); idx++)
        {
            int chA = (int)strA[idx];
            int chB = (int)strB[idx];

            int res = chB - chA;

            if (res < 0)
            {
                res += 26;
            }

            cout << res << ' ';
        }

        cout << '\n';
    }

    return 0;
}
