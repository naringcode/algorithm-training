#include <bits/stdc++.h>

using namespace std;

int t;
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> n;

        for (int i = 0; n >= (1 << i); i++)
        {
            if (n & (1 << i))
            {
                cout << i << ' ';
            }
        }

        cout << '\n';
    }

    return 0;
}
