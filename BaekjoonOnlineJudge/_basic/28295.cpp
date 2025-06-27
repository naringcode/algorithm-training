#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
char table[]{ 'N', 'E', 'S', 'W' };

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i : views::iota(0, 10))
    {
        int temp;
        cin >> temp;

        if (temp == 1)
        {
            n += 1;
        }
        else if (temp == 2)
        {
            n += 2;
        }
        else if (temp == 3)
        {
            n -= 1;
        }

        n = (n + 4) % 4;
    }

    println("{}", table[n]);

    return 0;
}
