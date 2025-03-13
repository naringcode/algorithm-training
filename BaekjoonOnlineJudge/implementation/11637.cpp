#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int t;
int n;
vector<int> vec;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;
        vec.resize(n);
        ranges::for_each(vec, [](int& elem) { cin >> elem; });

        auto maxIter = ranges::max_element(vec);

        if (ranges::count(vec, *maxIter) != 1)
        {
            println("no winner");

            continue;
        }

        int sum = std::accumulate(vec.begin(), vec.end(), 0);

        if (sum < *maxIter * 2)
        {
            println("majority winner {}", std::distance(vec.begin(), maxIter) + 1);
        }
        else
        {
            println("minority winner {}", std::distance(vec.begin(), maxIter) + 1);
        }
    }

    return 0;
}
