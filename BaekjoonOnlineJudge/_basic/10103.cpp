#include <bits/stdc++.h>

using namespace std;

int n;
int a;
int b;

int res[2]{ 100, 100 };

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> a >> b;

        if (a == b)
            continue;

        if (a < b)
        {
            res[0] -= b;
        }
        else
        {
            res[1] -= a;
        }
    }

    cout << res[0] << '\n' << res[1];

    return 0;
}
