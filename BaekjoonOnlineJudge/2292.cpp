#include <bits/stdc++.h>

using namespace std;

int n;

int sideLen = 1;
int area = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    
    while (n > area)
    {
        sideLen++;

        area += sideLen * 6 - 6;
    }

    cout << sideLen;

    return 0;
}
