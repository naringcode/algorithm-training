#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a;
int b;
int c;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (cin >> a)
    {
        cin >> b >> c;

        int temp = max((b - a), (c - b)) - 1;

        // if (temp % 2 == 0)
        // {
        //     temp--;
        // }

        cout << temp << '\n';
    }

    return 0;
}
