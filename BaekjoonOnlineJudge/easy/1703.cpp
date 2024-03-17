#include <bits/stdc++.h>

using namespace std;

int a;

int b;
int c;

int res = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        cin >> a;

        if (0 == a)
            break;

        res = 1;

        while (a--)
        {
            cin >> b >> c;

            res = (res * b) - c;
        }

        cout << res << '\n';
    }

    return 0;
}
