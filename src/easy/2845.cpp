#include <bits/stdc++.h>

using namespace std;

int a;
int b;

int c;

int res[5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;

    for (int i = 0; i < 5; i++)
    {
        cin >> c;

        res[i] = c - a * b;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << res[i] << ' ';
    }

    return 0;
}