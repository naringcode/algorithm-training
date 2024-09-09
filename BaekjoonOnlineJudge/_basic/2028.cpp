#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;

ll n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        string strSq = to_string(n * n);   
        string strN  = to_string(n);

        strSq = strSq.substr(strSq.length() - strN.length());

        if (strSq == strN)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
