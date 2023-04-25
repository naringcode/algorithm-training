#include <bits/stdc++.h>

using namespace std;

int a, b, c;

int accum;

int res[10];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> c;

    accum = a * b * c;

    while (accum)
    {
        int temp = accum % 10;

        res[temp]++;

        accum /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << res[i] << '\n';
    }

    return 0;
}
