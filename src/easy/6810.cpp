#include <bits/stdc++.h>

using namespace std;

int a;
int b;
int c;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> c;

    cout << "The 1-3-sum is " <<
        9 * 1 + 
        7 * 3 + 
        8 * 1 + 
        0 * 3 + 
        9 * 1 + 
        2 * 3 + 
        1 * 1 + 
        4 * 3 + 
        1 * 1 + 
        8 * 3 + 
        a * 1 + 
        b * 3 + 
        c * 1;

    return 0;
}
