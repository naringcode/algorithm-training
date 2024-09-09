#include <bits/stdc++.h>

using namespace std;

int t;

int a;
int b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> a >> b;

        int sum = 0;
        for (int i = 1; i <= a; i++)
        {
            sum += i;
        }

        if (sum == b)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
