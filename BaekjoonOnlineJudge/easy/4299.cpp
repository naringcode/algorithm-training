#include <bits/stdc++.h>

using namespace std;

int a;
int b;

int resA = -1;
int resB = -1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;

    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= a; j++)
        {
            if (i + j == a && i - j == b)
            {
                resA = i;
                resB = j;
            }
        }
    }

    if (resA < resB)
    {
        std::swap(resA, resB);
    }

    if (-1 != resA && -1 != resB)
    {
        cout << resA << ' ' << resB;
    }
    else
    {
        cout << -1;
    }

    return 0;
}
