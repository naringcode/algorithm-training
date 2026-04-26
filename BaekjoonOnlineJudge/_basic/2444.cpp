#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << ' ';
        }

        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << '*';
        }

        cout << '\n';
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ' ';
        }

        for (int j = (n - i - 2) * 2 + 1; j > 0; j--)
        {
            cout << '*';
        }

        cout << '\n';
    }
    
    return 0;
}
