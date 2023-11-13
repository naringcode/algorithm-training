#include <bits/stdc++.h>

using namespace std;

int n;
int cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 3; i++)
    {
        cnt = 0;

        for (int j = 0; j < 4; j++)
        {
            cin >> n;

            if (1 == n)
            {
                cnt++;
            }
        }
        
        if (4 == cnt)
        {
            cout << 'E' << '\n';
        }
        else if (3 == cnt)
        {
            cout << 'A' << '\n';
        }
        else if (2 == cnt)
        {
            cout << 'B' << '\n';
        }
        else if (1 == cnt)
        {
            cout << 'C' << '\n';
        }
        else if (0 == cnt)
        {
            cout << 'D' << '\n';
        }
    }

    return 0;
}
