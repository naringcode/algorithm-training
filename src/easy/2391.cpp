#include <bits/stdc++.h>

using namespace std;

int t;
int n;

string strA;
string strB;

int    mn;
string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        mn = 999'999;

        cin >> strA;
        cin >> n;

        while (n--)
        {
            cin >> strB;

            // set<pair<char, char>> chSet;
            int temp = 0;

            for (int idx = 0; idx < strA.length(); idx++)
            {
                if (strA[idx] == strB[idx])
                    continue;

                // chSet.insert({ strA[idx], strB[idx] });
                temp++;
            }

            // if (mn > chSet.size())
            // {
            //     mn = chSet.size();
            //     res = strB;
            // }

            if (mn > temp)
            {
                mn = temp;
                res = strB;
            }
        }

        cout << res << '\n';
    }

    return 0;
}
