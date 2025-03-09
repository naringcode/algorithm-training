#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int n;
int m;

vector<int> vec;
vector<int> res;

set<vector<int>> used;

void go(int idx)
{
    if (res.size() >= 2)
    {
        int backIdx = res.size() - 1;

        if (res[backIdx - 1] > res[backIdx])
            return;
    }

    if (res.size() == m)
    {
        if (used.contains(res))
            return;
            
        used.insert(res);

        ranges::for_each(res, [](int elem) { print("{} ", elem); });
        println("");

        return;
    }

    for (int i = idx; i < vec.size(); i++)
    {
        res.push_back(vec[i]);

        go(i + 1);

        res.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    vec.resize(n);
    ranges::for_each(vec, [](int& elem) { cin >> elem; });
    ranges::sort(vec);

    // vec.erase(ranges::unique(vec).begin(), vec.end());

    go(0);

    return 0;
}
