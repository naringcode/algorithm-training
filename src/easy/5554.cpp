#include <bits/stdc++.h>

using namespace std;

int a;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 4; i++)
    {
        cin >> a;

        res += a;
    }

    cout << res / 60 << '\n' << res % 60;

    return 0;
}
