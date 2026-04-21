#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll n;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    if (n % 2 == 1)
    {
        println("0");

        return 0;
    }

    if (n * (n + 1) / 2 % 2 == 1)
    {
        println("1");
    }
    else
    {
        println("2");
    }

    return 0;
}
