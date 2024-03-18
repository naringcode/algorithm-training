#include <bits/stdc++.h>

using namespace std;

using Type = long long;

Type numBills;
Type bills[54];
Type money;

Type go(Type money, Type idx)
{
    if (0 == idx)
    {
        if (0 == money % bills[idx])
            return 1;

        else
            return 0;
    }

    Type cnt = money / bills[idx];
    Type res = 0;

    for (Type i = 0; i <= cnt; i++)
    {
        res += go(money - bills[idx] * i, idx - 1);
    }

    return res;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);

    cin >> numBills;

    for (Type idx = 0; idx < numBills; idx++)
    {
        cin >> bills[idx];
    }

    cin >> money;

    cout << go(money, numBills - 1);

    return 0;
}
