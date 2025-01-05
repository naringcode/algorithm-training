#include <bits/stdc++.h>

using namespace std;

int n;
int m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    if (m <= 2)
    {
        cout << "NEWBIE!";
    }
    else if (n < m)
    {
        cout << "TLE!";
    }
    else
    {
        cout << "OLDBIE!";
    }

    return 0;
}
