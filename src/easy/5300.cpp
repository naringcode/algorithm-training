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
        if (0 != i && 0 == i % 6)
        {
            cout << "Go! ";
        }

        cout << i + 1 << ' ';
    }

    cout << "Go!";

    return 0;
}
