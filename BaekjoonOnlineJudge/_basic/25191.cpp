#include <bits/stdc++.h>

using namespace std;

int n;
int a;
int b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    cin >> a >> b;

    a /= 2;

    cout << min(n, a + b);

    return 0;
}
