#include <bits/stdc++.h>

using namespace std;

int t;

int a;
int b;

int resA;
int resB;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    while (t--)
    {
        resA = 0;
        resB = 0;

        for (int i = 0; i < 9; i++)
        {
            cin >> a >> b;

            resA += a;
            resB += b;
        }

        if (resA == resB)
        {
            cout << "Draw\n";
        }
        else if (resA > resB)
        {
            cout << "Yonsei\n";
        }
        else if (resA < resB)
        {
            cout << "Korea\n";
        }
    }

    return 0;
}
