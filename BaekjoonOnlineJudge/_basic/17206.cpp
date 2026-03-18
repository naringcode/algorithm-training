#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int t;
int n;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        int d3 = n / 3;
        int d7 = n / 7;
        int d21 = n / 21;

        d3 = d3 * (6 + 3 * (d3 - 1)) / 2;
        d7 = d7 * (14 + 7 * (d7 - 1)) / 2;
        d21 = d21 * (42 + 21 * (d21 - 1)) / 2;

        res = d3 + d7 - d21;

        println("{}", res);
    }

    return 0;
}
