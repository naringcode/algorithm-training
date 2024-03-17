#include <bits/stdc++.h>

using namespace std;

int x;

int  cnt = 1;
bool zig = true;

int resNumerator;
int resDenominator;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> x;

    while (cnt < x)
    {
        x -= cnt;

        cnt++;

        zig = !zig;
    }
    
    if (true == zig)
    {
        resNumerator   = cnt - x;
        resDenominator = cnt - resNumerator;

        resNumerator++;
    }
    else
    {
        resDenominator = cnt - x;
        resNumerator   = cnt - resDenominator;

        resDenominator++;
    }
        
    cout << resNumerator << '/' << resDenominator;

    return 0;
}
