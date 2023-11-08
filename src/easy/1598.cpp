#include <bits/stdc++.h>

using namespace std;

int a, b;

int distX;
int distY;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;

    a--;
    b--;

    distX = (b / 4) - (a / 4);
    distX = abs(distX);

    distY = (b % 4) - (a % 4);
    distY = abs(distY);

    cout << distX + distY;

    return 0;
}
