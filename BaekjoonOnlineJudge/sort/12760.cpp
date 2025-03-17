#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int n;
int m;

vector<vector<int>> vecs;

int winCnt[104];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> m;

    for (int i : views::iota(0, n))
    {
        vecs.emplace_back();
        vecs.back().resize(m);

        for (int& j : vecs.back())
        {
            cin >> j;
        }
    }

    ranges::for_each(vecs, std::bind(ranges::sort, placeholders::_1, greater{ }));

    for (int i : views::iota(0, m))
    {
        auto filter = vecs | views::transform([&](auto& vec) { return vec[i]; });
        auto mx = ranges::max(filter);

        for (int j : views::iota(0, n))
        {
            if (vecs[j][i] == mx)
            {
                winCnt[j]++;
            }
        }
    }

    auto mx = ranges::max(winCnt);

    for (int i : views::iota(0, n))
    {
        if (winCnt[i] == mx)
        {
            print("{} ", i + 1);
        }
    }

    return 0;
}
