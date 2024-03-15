#include <bits/stdc++.h>

using namespace std;

int a;

int resA = 9999;
int resB = 9999;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a;
    resA = min(resA, a);

    cin >> a;
    resA = min(resA, a);

    cin >> a;
    resA = min(resA, a);
    
    cin >> a;
    resB = min(resB, a);

    cin >> a;
    resB = min(resB, a);

    cout << resA + resB - 50;

    return 0;
}
