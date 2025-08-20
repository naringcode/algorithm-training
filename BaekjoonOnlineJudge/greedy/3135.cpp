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

    cin >> a >> b;
    cin >> n;

    res = abs(a - b);

    while (n--)
    {
        int temp;
        cin >> temp;

        res = min(res, abs(temp - b) + 1);
    }

    println("{}", res);

    return 0;
}
