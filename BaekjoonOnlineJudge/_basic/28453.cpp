#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
int m;

int main()
{
    cin >> n;

    while (n--)
    {
        cin >> m;

        if (m == 300)
        {
            print("1 ");
        }
        else if (m >= 275)
        {
            print("2 ");
        }
        else if (m >= 250)
        {
            print("3 ");
        }
        else
        {
            print("4 ");
        }
    }

    return 0;
}
