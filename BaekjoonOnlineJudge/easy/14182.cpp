#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> n;

        if (0 == n)
            break;

        if (n > 1'000'000 && n <= 5'000'000)
        {
            n -= n * 0.1;
        }
        else if (n > 5'000'000)
        {
            n -= n * 0.2;
        }

        cout << n << '\n';
    }

    return 0;
}
