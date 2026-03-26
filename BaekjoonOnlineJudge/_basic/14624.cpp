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

    if (n % 2 == 0)
    {
        println("I LOVE CBNU");

        return 0;
    }

    for (auto _ : views::iota(0, n))
    {
        print("*");
    }

    println("");

    str.resize(n / 2);
    ranges::fill(str, ' ');

    str += '*';
    println("{}", str);

    for (int i : views::iota(0, n / 2) | views::reverse)
    {
        str.back() = ' ';
        str += '*';
        
        str[i] = '*';
        println("{}", str);
        str[i] = ' ';
    }

    return 0;
}
