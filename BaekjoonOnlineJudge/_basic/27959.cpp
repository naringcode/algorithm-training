#include <bits/stdc++.h>

using namespace std;

int a;
int b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;

    a *= 100;

    if (a >= b)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}
