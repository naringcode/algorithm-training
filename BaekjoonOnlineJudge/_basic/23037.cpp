#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string str;

ll res;

ll go(ll num)
{
    return num * num * num * num * num;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> str;

    for (char ch : str)
    {
        res += go(ch - '0');
    }

    cout << res;

    return 0;
}
