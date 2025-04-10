#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;

bool go()
{
    for (int idx : views::iota(0, (int)str.length() / 2))
    {
        char frontCh = str[idx];
        char backCh  = str[str.length() - idx - 1];

        if (backCh == '-')
            continue;

        if (frontCh == backCh)
            continue;

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

    while (go() == false)
    {
        str += '-';
    }

    println("{}", str.length());

    return 0;
}
