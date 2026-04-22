#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;

string strA;
string strB;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    strA.resize(n + 2);
    strB.resize(n + 2);

    ranges::fill(strA, '@');
    ranges::fill(strB, ' ');

    strB.front() = '@';
    strB.back()  = '@';

    println("{}", strA);

    for (auto _ : views::iota(0, n))
    {
        println("{}", strB);
    }

    println("{}", strA);

    return 0;
}
