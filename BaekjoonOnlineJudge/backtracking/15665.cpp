#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int n;
int m;

vector<int> vec;
vector<int> res;

void go()
{
    if (res.size() == m)
    {
        ranges::for_each(res, [](int elem) { print("{} ", elem); });
        println("");

        return;
    }

    for (int i = 0; i < vec.size(); i++)
    {
        res.push_back(vec[i]);

        go();

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

    vec.erase(ranges::unique(vec).begin(), vec.end());

    go();

    return 0;
}
