#include <bits/stdc++.h>

using namespace std;

int t;

int a;
int b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> a >> b;

        int cnt = 0;

        while (a)
        {
            cnt += a % 2 ? 1 : 0;
            a /= 2;
        }

        if (cnt % 2 == b)
        {
            cout << "Valid\n";
        }
        else
        {
            cout << "Corrupt\n";
        }
    }

    return 0;
}
