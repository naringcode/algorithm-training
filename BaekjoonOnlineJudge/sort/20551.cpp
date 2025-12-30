#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

vector<int> vec;

map<int, int> mp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    vec.resize(n);

    for (int idx : views::iota(0, n))
    {
        cin >> vec[idx];
    }

    ranges::sort(vec);

    for (int idx : views::iota(0, n))
    {
        if (mp.contains(vec[idx]) == false)
        {
            mp[vec[idx]] = idx;
        }
    }

    while (m--)
    {
        int temp;
        cin >> temp;

        if (mp.contains(temp) == false)
        {
            println("-1");

            continue;
        }

        println("{}", mp[temp]);
    }

    return 0;
}
