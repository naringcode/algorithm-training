#include <bits/stdc++.h>

using namespace std;

int n;

int a;
int b;

int winA;
int winB;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    while (n--)
    {
        cin >> a >> b;

        if (a > b)
        {
            winA++;
        }
        else if (a < b)
        {
            winB++;
        }
    }

    cout << winA << ' ' << winB;

    return 0;
}
