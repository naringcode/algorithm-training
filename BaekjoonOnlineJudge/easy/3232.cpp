#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;

string p;
string q;
string r;

ll conv(const string& str, ll base)
{
    ll ret = 0;

    for (int idx = 0; idx < str.length(); idx++)
    {
        ll num = str[idx] - '0';

        if (num >= base)
            return -1;

        ret = ret * base + num;
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        ll b;

        cin >> p >> q >> r;

        for (b = 2; b <= 16; b++)
        {
            ll retP = conv(p, b);
            ll retQ = conv(q, b);;
            ll retR = conv(r, b);

            if (-1 != retP && -1 != retQ && -1 != retR)
            {
                if (retP * retQ == retR)
                    break;
            }
        }

        if (17 == b)
        {
            b = 0;
        }

        cout << b << '\n';
    }

    return 0;
}
