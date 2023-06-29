#include <bits/stdc++.h>

using namespace std;

int n;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n > 4)
    {
        res += n / 5;

        n /= 5;
    }

    cout << res;

    return 0;
}
