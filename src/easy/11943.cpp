#include <bits/stdc++.h>

using namespace std;

int a;
int b;
int c;
int d;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b >> c >> d;

    cout << min(a + d, b + c);

    return 0;
}