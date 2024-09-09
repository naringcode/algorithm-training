#include <bits/stdc++.h>

using namespace std;

int t;

int x;
int y;

int res[5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> x >> y;
        
        if (x == 0 || y == 0)
        {
            res[0]++;

            continue;
        }

        if (x > 0 && y > 0)
        {
            res[1]++;
        }
        else if (x < 0 && y > 0)
        {
            res[2]++;
        }
        else if (x < 0 && y < 0)
        {
            res[3]++;
        }
        else if (x > 0 && y < 0)
        {
            res[4]++;
        }
    }

    for (int i = 1; i <= 4; i++)
    {
        cout << "Q" << i << ": " << res[i] << '\n';
    }

    cout << "AXIS: " << res[0];

    return 0;
}
