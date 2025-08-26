#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int n;

string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        res = "";

        while (n--)
        {
            char ch;
            cin >> ch;

            string strA = res + ch;
            string strB = "";
            strB += ch;
            strB += res;

            if (strA < strB)
            {
                res = strA;
            }
            else
            {
                res = strB;
            }
        }

        println("{}", res);
    }

    return 0;
}
