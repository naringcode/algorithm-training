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

    cin >> t >> a >> b;

    a = a * a;
    b = b * b;

    a = a + b;

    while (t--)
    {
        cin >> b;

        b = b * b;

        if (a < b)
        {
            cout << "NE\n";
        }
        else
        {
            cout << "DA\n";
        }
    }

    return 0;
}
