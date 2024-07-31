#include <bits/stdc++.h>

using namespace std;

int n;

int a;
int b;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> a >> b;

        res += b % a;
    }

    cout << res;

    return 0;
}
