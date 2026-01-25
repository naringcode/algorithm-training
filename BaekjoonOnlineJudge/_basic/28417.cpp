#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i : views::iota(0, n))
    {
        int mx = 0;
        vector<int> vec;

        for (int j : views::iota(0, 2))
        {
            int temp;
            cin >> temp;

            mx = max(mx, temp);
        }

        for (int j : views::iota(0, 5))
        {
            int temp;
            cin >> temp;

            vec.push_back(temp);
        }

        ranges::sort(vec, greater{ });

        res = max(res, mx + vec[0] + vec[1]);
    }

    println("{}", res);
    
    return 0;
}
