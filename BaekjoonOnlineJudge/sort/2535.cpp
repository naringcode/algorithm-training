#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int n;

vector<tuple<int, int, int>> vec;
vector<pair<int, int>> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int con;
        int num;
        int score;

        cin >> con >> num >> score;

        vec.push_back({ con, num, score });
    }

    ranges::sort(vec, greater{ }, [](auto& tuple) { return get<2>(tuple); });

    res.push_back({ get<0>(vec[0]), get<1>(vec[0]) });
    res.push_back({ get<0>(vec[1]), get<1>(vec[1]) });

    for (auto [con, num, score] : vec | views::drop(2))
    {
        if (res[0].first == con && res[0].first == con)
            continue;

        res.push_back({ con, num });

        break;
    }

    for (auto [con, num] : res)
    {
        println("{} {}", con, num);
    }

    return 0;
}
