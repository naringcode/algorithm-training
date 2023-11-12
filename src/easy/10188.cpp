#include <bits/stdc++.h>

using namespace std;

int n;

int a;
int b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        for (int y = 0; y < b; y++)
        {
            for (int x = 0; x < a; x++)
            {
                cout << 'X';
            }

            cout << '\n';
        }

        cout << '\n';
    }

    return 0;
}
