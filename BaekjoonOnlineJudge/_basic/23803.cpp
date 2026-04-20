#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

string str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    str.resize(n);
    ranges::fill(str, '@');

    for (auto _ : views::iota(0, 4))
    {
        for (auto _ : views::iota(0, n))
        {
            println("{}", str);
        }
    }

    str.resize(n * 5);
    ranges::fill(str, '@');

    for (auto _ : views::iota(0, n))
    {
        println("{}", str);
    }
    
    return 0;
}
