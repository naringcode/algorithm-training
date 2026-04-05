#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;
int k;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> k;

    res = ((m - 1) + (k - 3)) % n;

    if (res < 0)
    {
        res += n;
    }

    println("{}", res + 1);

    return 0;
}
