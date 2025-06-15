#include <bits/stdc++.h>

using namespace std;

using ll = long long;

map<int, int> mp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i : views::iota(0, 5))
    {
        int temp;
        cin >> temp;

        mp[temp]++;
    }

    for (auto [id, val] : mp)
    {
        if (val % 2 == 1)
        {
            println("{}", id);

            break;
        }
    }

    return 0;
}
