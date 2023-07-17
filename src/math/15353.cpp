#include <bits/stdc++.h>

using namespace std;

string numA;
string numB;

string res;

bool carry;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> numA >> numB;

    while (numA.size() && numB.size())
    {
        int temp = (numA.back() - '0') + (numB.back() - '0');

        if (true == carry)
        {
            temp++;
        }

        if (temp >= 10)
        {
            temp -= 10;

            carry = true;
        }
        else
        {
            carry = false;
        }

        res.push_back(temp + '0');

        numA.pop_back();
        numB.pop_back();
    }

    while (numA.size())
    {
        int temp = numA.back() - '0';
        
        if (true == carry)
        {
            temp++;
        }
        
        if (temp >= 10)
        {
            temp -= 10;

            carry = true;
        }
        else
        {
            carry = false;
        }
        
        res.push_back(temp + '0');

        numA.pop_back();
    }

    while (numB.size())
    {
        int temp = numB.back() - '0';
        
        if (true == carry)
        {
            temp++;
        }
        
        if (temp >= 10)
        {
            temp -= 10;

            carry = true;
        }
        else
        {
            carry = false;
        }
        
        res.push_back(temp + '0');

        numB.pop_back();
    }

    if (carry)
    {
        res.push_back('1');
    }

    reverse(res.begin(), res.end());

    cout << res;

    return 0;
}