#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a;
    int b;

    cin >> a >> b;

    b += b - a;

    cout << b;

    return 0;
}
