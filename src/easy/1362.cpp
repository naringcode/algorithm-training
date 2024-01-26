#include <bits/stdc++.h>

using namespace std;

int t;

int a;
int b;

char c;
int d;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true)
    {
        t++;

        cin >> a >> b;

        if (0 == a && 0 == b)
            break;

        while (true)
        {
            cin >> c >> d;

            if ('#' == c && 0 == d)
            {
                if (b <= 0)
                {
                    cout << t << " RIP\n";
                }
                else if (b * 2 > a && b < a * 2)
                {
                    cout << t << " :-)\n";
                }
                else
                {
                    cout << t << " :-(\n";
                }

                break;
            }

            if (b > 0)
            {
                if ('E' == c)
                {
                    b -= d;
                }
                else if ('F' == c)
                {
                    b += d;
                }
            }
        }
    }

    return 0;
}
