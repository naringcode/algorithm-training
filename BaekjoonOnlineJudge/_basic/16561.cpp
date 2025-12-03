#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    int temp = n / 3;

    res = (temp - 1) * (temp - 2) / 2;

    println("{}", res);

    return 0;
}
