#include <bits/stdc++.h>

using namespace std;

int m;

string order;
int    num;

int res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> order;

        switch (order[1])
        {
            case 'd': // add
            {
                cin >> num;

                res |= (1 << num);

                break;
            }

            case 'e': // remove
            {
                cin >> num;

                res &= ~(1 << num);

                break;
            }

            case 'h': // check
            {
                cin >> num;

                if (res & (1 << num))
                {
                    cout << 1 << '\n';
                }
                else
                {
                    cout << 0 << '\n';
                }

                break;
            }

            case 'o': // toggle
            {
                cin >> num;

                res ^= (1 << num);

                break;
            }

            case 'l': // all
            {
                res |= 0b1111'1111'1111'1111'1111'1111;

                break;
            }

            case 'm': // empty
            {
                res = 0;

                break;
            }
        }
    }

    return 0;
}