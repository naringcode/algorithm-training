#include <bits/stdc++.h>

using namespace std;

int t;

string strA;
string strB;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> strA >> strB;

        while (strA.size() > 1)
        {
            if ('0' != strA.back())
                break;

            strA.pop_back();
        }

        while (strB.size() > 1)
        {
            if ('0' != strB.back())
                break;

            strB.pop_back();
        }

        reverse(strA.begin(), strA.end());
        reverse(strB.begin(), strB.end());

        int a = atoi(strA.data());
        int b = atoi(strB.data());

        string res = to_string(a + b);

        while (res.size() > 1)
        {
            if ('0' != res.back())
                break;

            res.pop_back();
        }

        reverse(res.begin(), res.end());

        cout << res << '\n';
    }

    return 0;
}
