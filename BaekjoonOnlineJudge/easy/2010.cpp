#include <bits/stdc++.h>

using namespace std;

int n;

int temp;
int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;

        res += temp;
    }

    res -= n - 1;

    cout << res;

    return 0;
}