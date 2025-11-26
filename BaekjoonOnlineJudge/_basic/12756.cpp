#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int a1;
int a2;

int b1;
int b2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a1 >> a2;
    cin >> b1 >> b2;

    while (true)
    {
        a2 -= b1;
        b2 -= a1;

        if (a2 <= 0 && b2 <= 0)
        {
            println("DRAW");

            break;
        }
        else if (a2 <= 0)
        {
            println("PLAYER B");
            
            break;
        }
        else if (b2 <= 0)
        {
            println("PLAYER A");

            break;
        }
    }

    return 0;
}
