#include <bits/stdc++.h>

using namespace std;

int t;

int r;
int e;
int c;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> r >> e >> c;

        e -= c;

        if (r == e)
        {
            cout << "does not matter\n";
        }
        else if (r > e)
        {
            cout << "do not advertise\n";
        }
        else
        {
            cout << "advertise\n";
        }
    }

    return 0;
}
