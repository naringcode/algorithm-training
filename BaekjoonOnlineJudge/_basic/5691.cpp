#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a;
int b;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> a >> b;

        if (a == 0 && b == 0)
            break;

        res = b - a;
        res = a - res;

        println("{}", res);
    }

    return 0;
}
