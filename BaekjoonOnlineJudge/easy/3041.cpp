#include <bits/stdc++.h>

using namespace std;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            char ch = getchar();

            if ('.' != ch)
            {
                ch -= 'A';

                res += abs(ch / 4 - y) + abs(ch % 4 - x);
            }
        }

        getchar(); // '\n'
    }

    cout << res;

    return 0;
}
