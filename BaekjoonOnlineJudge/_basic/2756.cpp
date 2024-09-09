#include <bits/stdc++.h>

using namespace std;

int t;

double x;
double y;

int ToScore(double x, double y)
{
    double lenSq = x * x + y * y;

    if (lenSq <= 9)
    {
        return 100;
    }
    else if (lenSq <= 36)
    {
        return 80;
    }
    else if (lenSq <= 81)
    {
        return 60;
    }
    else if (lenSq <= 144)
    {
        return 40;
    }
    else if (lenSq <= 225)
    {
        return 20;
    }

    return 0;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;
    
    while (t--)
    {
        int p1 = 0;
        int p2 = 0;

        for (int i = 0; i < 3; i++)
        {
            cin >> x >> y;

            p1 += ToScore(x, y);
        }
        
        for (int i = 0; i < 3; i++)
        {
            cin >> x >> y;

            p2 += ToScore(x, y);
        }

        cout << "SCORE: " << p1 << " to " << p2 << ", ";

        if (p1 == p2)
        {
            cout << "TIE.\n";
        }
        else if (p1 > p2)
        {
            cout << "PLAYER 1 WINS.\n";
        }
        else
        {
            cout << "PLAYER 2 WINS.\n";
        }
    }

    return 0;
}
