#include <bits/stdc++.h>

using namespace std;

int a, b;

int curr;
int mx;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 10; i++)
    {
        cin >> a >> b;

        curr += (b - a);

        mx = max(mx, curr);
    }

    cout << mx;

    return 0;
}
