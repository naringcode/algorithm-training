#include <bits/stdc++.h>

using namespace std;

string strA;
string strB;

bool carry;

string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> strA >> strB;

    reverse(strA.begin(), strA.end());
    reverse(strB.begin(), strB.end());

    auto iterA = strA.begin();
    auto iterB = strB.begin();

    while (strA.end() != iterA && strB.end() != iterB)
    {
        int val = (*iterA) - '0';
        val += (*iterB) - '0';

        if (true == carry)
        {
            val++;
        }

        if (val >= 2)
        {
            val -= 2;
            carry = true;
        }
        else
        {
            carry = false;
        }

        res += (val + '0');

        iterA++;
        iterB++;
    }

    while (strA.end() != iterA)
    {
        int val = (*iterA) - '0';

        if (true == carry)
        {
            val++;
        }

        if (val >= 2)
        {
            val -= 2;
            carry = true;
        }
        else
        {
            carry = false;
        }

        res += (val + '0');

        iterA++;
    }

    while (strB.end() != iterB)
    {
        int val = (*iterB) - '0';

        if (true == carry)
        {
            val++;
        }

        if (val >= 2)
        {
            val -= 2;
            carry = true;
        }
        else
        {
            carry = false;
        }

        res += (val + '0');

        iterB++;
    }

    if (true == carry)
    {
        res += '1';
    }

    while (res.size() > 1 && '0' == res.back())
    {
        res.pop_back();
    }

    reverse(res.begin(), res.end());

    cout << res;

    return 0;
}
