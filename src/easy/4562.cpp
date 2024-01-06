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

    while (n--)
    {
        cin >> a >> b;

        if (a >= b)
        {
            cout << "MMM BRAINS\n";
        }
        else
        {
            cout << "NO BRAINS\n";
        }
    }

    return 0;
}
