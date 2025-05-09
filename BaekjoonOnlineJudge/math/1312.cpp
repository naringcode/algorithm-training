#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a;
int b;
int n;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> n;

    for (int i : views::iota(0, n))
    {
        a = a % b;
        a = a * 10;

        res = a / b;
    }

    println("{}", res);

    return 0;
}
