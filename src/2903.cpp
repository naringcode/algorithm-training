#include <bits/stdc++.h>

using namespace std;

int n;
int res = 2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        res = res * 2 - 1;
    }

    res *= res;

    cout << res;

    return 0;
}
