#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int x = 0; x < n - 1; x++)
    {
        cout << ' ';
    }

    cout << '*' << '\n';
    
    if (1 == n)
        return 0;

    for (int y = 1; y < n - 1; y++)
    {
        for (int x = 0; x < (n - y) - 1; x++)
        {
            cout << ' ';
        }

        cout << '*';

        for (int x = 0; x < (y * 2) - 1; x++)
        {
            cout << ' ';
        }
        
        cout << '*';

        cout << '\n';
    }

    for (int x = 0; x < n * 2 - 1; x++)
    {
        cout << '*';
    }

    return 0;
}
