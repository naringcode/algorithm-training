#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

string strA;
string strB;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    strA.resize(n * 5);
    strB.resize(n);

    ranges::fill(strA, '@');
    ranges::fill(strB, '@');

    for (int i : views::iota(0, n))
    {
        println("{}", strA);
    }

    for (int i : views::iota(n, n * 5))
    {
        println("{}", strB);
    }

    return 0;
}
