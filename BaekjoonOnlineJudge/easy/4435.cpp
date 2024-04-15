#include <bits/stdc++.h>

using namespace std;

int n;

int goA()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;

    cin >> a >> b >> c >> d >> e >> f;

    return a + b * 2 + c * 3 + d * 3 + e * 4 + f * 10;
}

int goB()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;

    cin >> a >> b >> c >> d >> e >> f >> g;

    return a + b * 2 + c * 2 + d * 2 + e * 3 + f * 5 + g * 10;
}

void combat()
{
    for (int i = 1; i <= n; i++)
    {
        cout << "Battle " << i << ": ";

        int temp = goA() - goB();
        
        if (0 == temp)
        {
            cout << "No victor on this battle field\n";
        }
        else if (temp > 0)
        {
            cout << "Good triumphs over Evil\n";
        }
        else
        {
            cout << "Evil eradicates all trace of Good\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    combat();

    return 0;
}
