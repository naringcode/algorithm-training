#include <bits/stdc++.h>

using namespace std;

int x;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> x;

    for (int i = 1; i <= 64; i <<= 1)
    {
        if (x & i)
        {
            res++;
        }
    }

    cout << res;

    return 0;
}