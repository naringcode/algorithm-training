#include <bits/stdc++.h>

using namespace std;

string str;

int sum;

bool IsPrime(int num)
{
    if (num <= 2)
        return true;

    for (int i = 2; i * i <= num; i++)
    {
        if (0 == num % i)
            return false;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (char ch : str)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            sum += ch - 'A' + 27;
        }
        else
        {
            sum += ch - 'a' + 1;
        }
    }

    if (IsPrime(sum))
    {
        cout << "It is a prime word.";
    }
    else
    {
        cout << "It is not a prime word.";
    }

    return 0;
}
