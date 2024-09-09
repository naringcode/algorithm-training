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

        int idx = 0;

        for (idx = 0; idx < 26; idx++)
        {
            if (count(strA.begin(), strA.end(), 'a' + idx) !=
                count(strB.begin(), strB.end(), 'a' + idx))
            {

                break;
            }
        }

        if (26 == idx)
        {
            cout << "Possible\n";
        }
        else
        {
            cout << "Impossible\n";
        }
    }

    return 0;
}
