#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    switch (n)
    {
        case 1: cout << 2; break;
        case 2: cout << 4; break;
        case 3: cout << 8; break;
        case 4: cout << 16; break;
        case 5: cout << 32; break;
    }

    return 0;
}