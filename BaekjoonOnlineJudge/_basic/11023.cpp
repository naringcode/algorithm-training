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

    while (cin >> n)
    {
        res += n;
    }

    println("{}", res);

    return 0;
}
