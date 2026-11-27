#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int x;

int sum;

int resA;
int resB;

int main()
{
    cin >> n;
    sum = (n - 1) * 8;

    for (int _ : views::iota(0, n))
    {
        cin >> x;

        sum += x;
    }

    resA = sum / 24;
    resB = sum % 24;

    println("{} {}", resA, resB);

    return 0;
}
