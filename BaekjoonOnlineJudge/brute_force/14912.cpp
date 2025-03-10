#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int arr[10];

int n;
int d;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> d;

    for (auto num : views::iota(1, n + 1))
    {
        while (num > 0)
        {
            arr[num % 10]++;

            num /= 10;
        }
    }

    println("{}", arr[d]);

    return 0;
}
