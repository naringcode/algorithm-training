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

    if (10000 <= a * 100 - a * b)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
    }

    return 0;
}
