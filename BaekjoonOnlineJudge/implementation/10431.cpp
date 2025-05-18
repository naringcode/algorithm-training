#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int p;

int t;
vector<int> vec;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> p;

    while (p--)
    {
        cin >> t;

        vec.clear();
        res = 0;

        for (int idx : views::iota(0, 20))
        {
            int temp;
            cin >> temp;

            auto iter = ranges::lower_bound(vec, temp);

            res += distance(iter, vec.end());

            vec.insert(iter, temp);
        }

        println("{} {}", t, res);
    }

    return 0;
}
