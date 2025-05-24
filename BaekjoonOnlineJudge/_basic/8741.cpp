#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll k;

string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> k;

    for (int i : views::iota(0, k))
    {
        res += '1';
    }

    for (int i : views::iota(1, k))
    {
        res += '0';
    }

    println("{}", res);

    return 0;
}
