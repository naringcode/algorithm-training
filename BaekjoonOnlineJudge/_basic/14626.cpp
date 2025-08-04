#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    int star = str.find('*');
    int sum  = 0;

    for (int idx : views::iota(0, ssize(str)))
    {
        if (str[idx] == '*')
            continue;

        int temp = str[idx] - '0';

        if (idx % 2 == 1)
        {
            temp *= 3;
        }

        sum += temp;
    }

    if (star % 2 == 1)
    {
        for (int num : views::iota(0, 10))
        {
            if ((sum + num * 3) % 10 == 0)
            {
                println("{}", num);

                break;
            }
        }
    }
    else
    {
        sum %= 10;

        println("{}", (10 - sum) % 10); // sum이 0이면?
    }

    return 0;
}
