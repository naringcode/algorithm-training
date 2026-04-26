#include <bits/stdc++.h>

using namespace std;

int t;
int a, b;

const int arr[10] = { 10, 10, 4, 4, 2, 10, 10, 4, 4, 2 };

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;

        a %= 10;

        b -= 1;
        b %= arr[a];
        b += 1;

        res = pow((float)a, (float)b);
        
        res %= 10;

        if (0 == res)
        {
            res = 10;
        }

        cout << res << '\n';
    }

    return 0;
}
