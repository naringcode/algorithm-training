#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

vector<ll> vec;

int n;
ll  res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    vec.resize(n);
    ranges::for_each(vec, [](ll& elem) { cin >> elem; });
    ranges::sort(vec, greater{ });

    for (auto [idx, val] : views::zip(views::iota(1), vec))
    {
        res += max(val - (idx - 1), 0ll);
    }

    cout << res;

    return 0;
}
