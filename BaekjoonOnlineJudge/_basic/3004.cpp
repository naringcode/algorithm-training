#include <bits/stdc++.h>

using namespace std;

int n;

int r;
int c;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    r = n / 2 + 1;
    c = n - r + 2;

    cout << r * c;

    return 0;
}
