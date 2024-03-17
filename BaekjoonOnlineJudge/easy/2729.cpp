#include <bits/stdc++.h>

using namespace std;

int t;

string a;
string b;

string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        res = "";

        bool carry = false;
        int  sum;

        int idxA = 0;
        int idxB = 0;

        while (a.length() > idxA && b.length() > idxB)
        {
            sum = int(carry);

            if ('1' == a[idxA])
            {
                sum++;
            }
            
            if ('1' == b[idxB])
            {
                sum++;
            }

            if (sum >= 2)
            {
                carry = true;
            }
            else
            {
                carry = false;
            }

            res += char((sum % 2) + '0');

            idxA++;
            idxB++;
        }

        while (a.length() > idxA)
        {
            sum = int(carry);

            if ('1' == a[idxA])
            {
                sum++;
            }
            
            if (sum >= 2)
            {
                carry = true;
            }
            else
            {
                carry = false;
            }

            res += char((sum % 2) + '0');

            idxA++;
        }

        while (b.length() > idxB)
        {
            sum = int(carry);

            if ('1' == b[idxB])
            {
                sum++;
            }
            
            if (sum >= 2)
            {
                carry = true;
            }
            else
            {
                carry = false;
            }

            res += char((sum % 2) + '0');

            idxB++;
        }

        if (true == carry)
        {
            res += '1';
        }

        while (res.size())
        {
            if ('0' == res.back())
            {
                res.pop_back();

                continue;
            }

            break;
        }

        if (0 == res.length())
        {
            res += '0';
        }

        reverse(res.begin(), res.end());

        cout << res << '\n';
    }

    return 0;
}
