#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int res = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n != 1)
    {
        res++;

        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
    }

    println("{}", res);

    return 0;
}
