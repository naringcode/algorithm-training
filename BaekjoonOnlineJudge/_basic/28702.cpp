#include <bits/stdc++.h>

using namespace std;

string str;
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 3; i++)
    {
        cin >> str;

        if (str[0] >= '0' && str[0] <= '9')
        {
            n = atoi(str.c_str());
        }

        n++;
    }

    if (n % 3 == 0 && n % 5 == 0)
    {
        cout << "FizzBuzz";
    }
    else if (n % 3 == 0 && n % 5 != 0)
    {
        cout << "Fizz";
    }
    else if (n % 3 != 0 && n % 5 == 0)
    {
        cout << "Buzz";
    }
    else
    {
        cout << n;
    }

    return 0;
}
