#include <bits/stdc++.h>
#include <span>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int n;

ll arr[200'004];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int idx : views::iota(0, n))
    {
        cin >> arr[idx];
    }

    ranges::sort(arr, arr + n);

    println("{}", arr[(n - 1) / 2]);
    
    return 0;
}
