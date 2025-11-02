#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int n;

int x;
int y;

vector<pair<int, int>> vec;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        vec.clear();

        for (int i : views::iota(0, n))
        {
            cin >> x >> y;

            vec.push_back({ x, y });
        }

        ranges::sort(vec);

        int temp = vec[0].second;
        res = 1;

        for (int idx : views::iota(1, n))
        {
            if (vec[idx].second < temp)
            {
                res++;

                temp = vec[idx].second;
            }
        }

        println("{}", res);
    }

    return 0;
}
