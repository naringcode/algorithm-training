#include <bits/stdc++.h>

using namespace std;

int t;

string strA;
string strB;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> strA >> strB;

        res = 0;

        for (int idx = 0; idx < strA.size(); idx++)
        {
            if (strA[idx] != strB[idx])
            {
                res++;
            }
        }

        cout << "Hamming distance is " << res << ".\n";
    }

    return 0;
}
