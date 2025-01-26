#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            if (col != 0)
            {
                cout << ' ';
            }

            cout << (row * m) + col + 1;
        }

        cout << '\n';
    }

    return 0;
}
