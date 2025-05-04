#include <bits/stdc++.h>

using namespace std;

int n;
int m;

int main()
{
    cin >> n >> m;

    auto odds = views::iota(1, n + 1) | views::filter([](int elem) { return elem % m == 0; });
    int  sum  = ranges::fold_left(odds, 0, plus{ });

    println("{}", sum);

    return 0;
}
