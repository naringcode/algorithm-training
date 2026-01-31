#include <iostream>
#include <ranges>

using namespace std;

using ll = long long;

int n;
ll sum;

int main()
{
    cin >> n;

    for (auto [y, x] : views::cartesian_product(views::iota(0, n), views::iota(0, n)))
    {
        ll temp;
        cin >> temp;

        sum += temp;
    }

    cout << sum;

    return 0;
}
