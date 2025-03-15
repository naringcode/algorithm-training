#include <bits/stdc++.h>
#include <ranges>
#include <print>

using namespace std;

using ll = long long;

int n;
int m;
int k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> k;

    if (n + m - 1 > k)
    {
        println("NO");

        return 0;
    }

    println("YES");

    for (int c : views::iota(0, n))
    {
        for (int r : views::iota(c, c + m))
        {
            print("{} ", r + 1);
        }

        println("");
    }

    return 0;
}
