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

    a *= 7;
    b *= 13;

    if (a > b)
    {
        cout << "Axel";
    }
    else if (a < b)
    {
        cout << "Petra";
    }
    else
    {
        cout << "lika";
    }

    return 0;
}
