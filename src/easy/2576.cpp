#include <bits/stdc++.h>

using namespace std;

int n;

int minV = 1000;
int sumV;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (cin >> n)
    {
        if (0 == n % 2)
            continue;

        minV = min(minV, n);
        sumV += n;
    }

    if (0 == sumV)
    {
        cout << -1;
    }
    else
    {
        cout << sumV << '\n' << minV;
    }

    return 0;
}