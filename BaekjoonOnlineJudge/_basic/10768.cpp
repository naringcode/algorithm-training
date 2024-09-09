#include <bits/stdc++.h>

using namespace std;

int a;
int b;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;

    if (2 == a)
    {
        if (18 == b)
        {
            cout << "Special";
        }
        else if (b < 18)
        {
            cout << "Before";
        }
        else
        {
            cout << "After";
        }
    }
    else if (1 == a)
    {
        cout << "Before";
    }
    else
    {
        cout << "After";
    }

    return 0;
}