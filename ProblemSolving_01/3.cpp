#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin >> n;

    auto filterView = views::iota(2, n / 2 + 1) | views::filter([&](int elem) { return n % elem == 0; });

    print("1");

    int sum = ranges::fold_left(filterView, 1, [](int lhs, int rhs) {
        print("+{}", rhs);

        return lhs + rhs;
    });

    print("={}", sum);

    return 0;
}
